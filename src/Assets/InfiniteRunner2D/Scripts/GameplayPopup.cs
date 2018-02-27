using System;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

[Serializable]
public class GameplayPopup
{
    [SerializeField]
    private GameObject _popup;
    [SerializeField]
    private Text _collectedItemsText;
    [SerializeField]
    private Text _gameplayTimeText;
    [SerializeField]
    private Button _pauseButton;
    [SerializeField]
    private Button _resumeButton;
    [SerializeField]
    private Button _menuButton;
    [SerializeField]
    private GameObject _pausePanel;

    public string GameplayTimeText {
        get {
            return _gameplayTimeText.text;
        }
    }

    public string CollectedItemsText {
        get {
            return _collectedItemsText.text;
        }
    }

    public void Initialize()
    {
        _pauseButton.onClick.AddListener(() => OnPauseResume(true));

        _resumeButton.onClick.AddListener(() => OnPauseResume(false));
        _resumeButton.gameObject.SetActive(false);

        _menuButton.onClick.AddListener(OnMenu);
        _menuButton.gameObject.SetActive(false);

        _popup.SetActive(true);
    }

    public void UpdateGameplayTime(float currentGameplayTime)
    {
        float minutes = (currentGameplayTime / 60f) % 60;
        float seconds = (currentGameplayTime % 60f);

        _gameplayTimeText.text = string.Format("{0:00}:{1:00}", minutes, seconds);
    }

    public void UpdateCollectedItems(int collectedItems)
    {
        _collectedItemsText.text = collectedItems.ToString();
    }

    public void Hide()
    {
        _popup.SetActive(false);
    }

    private void OnPauseResume(bool isPause)
    {
        Time.timeScale = 1 - Time.timeScale;

        _pauseButton.gameObject.SetActive(!isPause);

        _resumeButton.gameObject.SetActive(isPause);
        _menuButton.gameObject.SetActive(isPause);
        _pausePanel.SetActive(isPause);
    }

    private void OnMenu()
    {
        SceneManager.LoadScene("Menu");
    }
}