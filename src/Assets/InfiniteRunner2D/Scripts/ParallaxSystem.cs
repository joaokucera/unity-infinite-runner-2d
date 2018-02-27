using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public partial class ParallaxSystem : MonoBehaviour
{
    private Camera _mainCamera;
    private Transform _transform;
    private List<ParallaxItem> _items;

    [SerializeField]
    private Vector2 _speed;
    [SerializeField]
    private Vector2 _direction;
    [SerializeField]
    private bool _isLooping;

    public Transform Transform {
        get {
            return _transform;
        }
    }

    private void Start()
    {
        _mainCamera = Camera.main;

        _transform = transform;

        if (_isLooping) {
            _items = new List<ParallaxItem>();

            for (int i = 0; i < _transform.childCount; i++) {
                Transform childTranform = _transform.GetChild(i);
                var childRenderer = childTranform.GetComponent<SpriteRenderer>(); 

                if (childRenderer) {
                    _items.Add(new ParallaxItem {
                        Transform = childTranform,
                        Renderer = childRenderer
                    });
                }
            }

            _items = _items.OrderBy(t => t.Transform.position.x).ToList();
        }
    }

    private void Update()
    {
        Vector2 movement = new Vector2(_speed.x * _direction.x, _speed.y * _direction.y);
        movement *= Time.deltaTime;

        _transform.Translate(movement);

        if (_isLooping) {
            ParallaxItem firstChild = _items.FirstOrDefault();

            if (firstChild != null) {
                if (firstChild.Transform.position.x < _mainCamera.transform.position.x) {
                    if (!firstChild.Renderer.isVisible) {
                        ParallaxItem lastChild = _items.LastOrDefault();

                        Vector3 lastPosition = lastChild.Transform.position;
                        Vector3 lastSize = (lastChild.Renderer.bounds.max - lastChild.Renderer.bounds.min);
                        
                        firstChild.Transform.position = new Vector3(
                            lastPosition.x + lastSize.x,
                            firstChild.Transform.position.y,
                            firstChild.Transform.position.z);

                        _items.Remove(firstChild);
                        _items.Add(firstChild);
                    }
                }
            }
        }
    }
}