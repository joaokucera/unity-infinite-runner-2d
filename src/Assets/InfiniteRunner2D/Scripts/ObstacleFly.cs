using UnityEngine;

public class ObstacleFly : Obstacle
{
    private Transform _transform;
    private Vector2 _startPosition;

    [SerializeField]
    private float _maxSpeed;

    private void OnEnable()
    {
        _transform = transform;

        _startPosition = _transform.position;
        _startPosition.y += _maxSpeed / 2;
    }

    private void Update()
    {
        _transform.position = new Vector3(transform.position.x, _startPosition.y + Mathf.Sin(_maxSpeed * Time.time), transform.position.z);
    }
}