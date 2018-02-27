using System;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

[Serializable]
public class GameoverPopup
{
    [SerializeField]
    private GameObject _popup;
    [SerializeField]
    private Text _collectedItemsText;
    [SerializeField]
    private Text _gameplayTimeText;
    [SerializeField]
    private Button _replayButton;
    [SerializeField]
    private Button _menuButton;

    public void Initialize()
    {
        _popup.SetActive(false);

        _replayButton.onClick.AddListener(() => OnClick("Game"));
        _menuButton.onClick.AddListener(() => OnClick("Menu"));
    }

    public void Show(string collectedItems, string gameplayTime)
    {
        _collectedItemsText.text = string.Format("Collected Items: {0}", collectedItems);
        _gameplayTimeText.text = string.Format("Gameplay Time: {0}", gameplayTime);

        _popup.SetActive(true);
    }

    private void OnClick(string sceneName)
    {
        SceneManager.LoadScene(sceneName);
    }
}