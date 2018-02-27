using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawningSystem : Pooling
{
    private List<int> _probabilityPool;
    private Coroutine _onSpawnCoroutine;

    [SerializeField]
    private Transform[] _points;
    [SerializeField]
    [Range(1, 10)]
    private float _extraFirstSpawingTime;
    [SerializeField]
    [Range(1, 10)]
    private float _minSpawingTime;
    [SerializeField]
    [Range(1, 10)]
    private float _maxSpawingTime;
    [SerializeField]
    [Range(0, 1)]
    private float _decreaseSpawingTime;

    private void Start()
    {
        _probabilityPool = new List<int>();

        for (int i = 0; i < _items.Length; i++) {
            for (int j = 0; j < _items[i].Probability; j++) {
                _probabilityPool.Add(i);
            }
        }

        _onSpawnCoroutine = StartCoroutine(OnSpawn());
    }

    public void StopSpawing()
    {
        if (_onSpawnCoroutine == null) {
            return;
        }

        StopCoroutine(_onSpawnCoroutine);
    }

    private IEnumerator OnSpawn()
    {
        float waitTime = _extraFirstSpawingTime;
        float maxTime = _maxSpawingTime;

        while (true) {
            waitTime += Random.Range(_minSpawingTime, maxTime);

            maxTime -= _decreaseSpawingTime;
            maxTime = Mathf.Max(_minSpawingTime, maxTime);

            while (waitTime > 0) {
                waitTime -= Time.deltaTime;

                yield return 0;
            }

            Spawn();
        }
    }

    private void Spawn()
    {
        int probabilityIndex = Random.Range(0, _probabilityPool.Count);
        int probabilityValue = _probabilityPool[probabilityIndex];
        string probabilityTag = _items[probabilityValue].Tag;

        int parallaxIndex = Random.Range(0, _points.Length);
        Transform point = _points[parallaxIndex];

        Dequeue(probabilityTag, point.position, point.rotation);
    }
}