using System.Collections.Generic;
using UnityEngine;

public abstract class Pooling : MonoBehaviour
{
    private Dictionary<string, Queue<GameObject>> _dictionary;

    [SerializeField]
    protected Transform _parent;
    [SerializeField]
    protected PoolingItem[] _items;

    private void Awake()
    {
        _dictionary = new Dictionary<string, Queue<GameObject>>();

        for (int i = 0; i < _items.Length; i++) {
            var pool = new Queue<GameObject>();

            for (int j= 0; j < _items[i].Size; j++) {
                GameObject obj = Instantiate(_items[i].Prefab, _parent);
                obj.gameObject.SetActive(false);

                pool.Enqueue(obj);
            }

            _dictionary.Add(_items[i].Tag, pool);
        }
    }

    public GameObject Dequeue(string tag, Vector2 position, Quaternion rotation)
    {
        GameObject obj = _dictionary[tag].Dequeue();

        obj.transform.position = position;
        obj.transform.rotation = rotation;

        obj.gameObject.SetActive(true);

        _dictionary[tag].Enqueue(obj);

        return obj;
    }
}