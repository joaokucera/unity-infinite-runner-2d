using UnityEngine;

[RequireComponent(typeof(Rigidbody2D))]
public class PlayerMovement : MonoBehaviour
{
    private Transform _transform;
    private Rigidbody2D _rigidbody;

    [SerializeField]
    private Transform _groundCheck;
    [SerializeField]
    private LayerMask _groundLayer;
    [SerializeField]
    private float _jumpForce;

    private void Start()
    {
        _transform = transform;
        _rigidbody = GetComponent<Rigidbody2D>();
    }

    private void FixedUpdate()
    {
        bool onGround = Physics2D.Linecast(_transform.position, _groundCheck.position, _groundLayer);

        if (Input.GetKeyDown(KeyCode.Space) && onGround) {
            _rigidbody.AddForce(Vector2.up * _jumpForce);
        }
    }
}