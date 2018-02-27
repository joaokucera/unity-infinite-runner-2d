using UnityEngine;

[RequireComponent(typeof(AudioSource))]
public class PlayerController : MonoBehaviour
{
    private BoxCollider2D _boxCollider;
    private AudioSource _audioSource;
    private int _collectedItems;

    [SerializeField]
    private UIManager _uiManager;
    [SerializeField]
    private AudioClip _collectItemClip;
    [SerializeField]
    private AudioClip _gameoverClip;

    private void Start()
    {
        _audioSource = GetComponent<AudioSource>();
    }

    private void OnCollisionEnter2D(Collision2D other)
    {
        if (other.gameObject.CompareTag("Obstacle")) {
            other.gameObject.SetActive(false);

            OnDeath();
        }
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.CompareTag("Item")) {
            var item = other.gameObject.GetComponent<Item>();

            item.OnCollected(OnAfterCollected);
        }
    }

    public void OnAfterCollected(int value)
    {
        _audioSource.PlayOneShot(_collectItemClip);

        _collectedItems += value;

        _uiManager.UpdateCollectedItems(_collectedItems);
    }

    private void OnDeath()
    {
        _audioSource.Stop();
        _audioSource.PlayOneShot(_gameoverClip);

        _uiManager.OnGameOver();

        string username = PlayerLog.GetName();
        int score = _collectedItems;

        StartCoroutine(Leaderboard.UploadHighscore(username, score));
    }
}