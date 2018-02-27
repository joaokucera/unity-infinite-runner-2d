using UnityEngine;

public class UIManager : MonoBehaviour
{
    private float _gameplayStartTime;
    private bool _isGameover;

    [SerializeField]
    private GameManager _gameManager;
    [SerializeField]
    private GameObject _startMessage;
    [SerializeField]
    private GameplayPopup _gameplayPopup;
    [SerializeField]
    private GameoverPopup _gameoverPopup;

    private void Start()
    {
        _startMessage.SetActive(false);

        _gameplayPopup.Initialize();
        _gameoverPopup.Initialize();
    
        _gameplayStartTime = Time.timeSinceLevelLoad;
    }

    private void Update()
    {
        if (_isGameover) {
            return;
        }

        float currentGameplayTime = Time.timeSinceLevelLoad - _gameplayStartTime;

        _gameplayPopup.UpdateGameplayTime(currentGameplayTime);
    }

    public void UpdateCollectedItems(int collectedItems)
    {
        _gameplayPopup.UpdateCollectedItems(collectedItems);
    }

    public void OnGameOver()
    {
        _isGameover = true;
        _gameManager.EnableScripts(false);

        _gameplayPopup.Hide();
        _gameoverPopup.Show(_gameplayPopup.CollectedItemsText, _gameplayPopup.GameplayTimeText);
    }
}