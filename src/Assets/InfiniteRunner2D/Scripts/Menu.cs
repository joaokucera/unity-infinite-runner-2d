using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Menu : MonoBehaviour
{
    [SerializeField]
    private InputField _playerNameInputField;
    [SerializeField]
    private Button _playButton;

    private void Start()
    {
        _playerNameInputField.onEndEdit.AddListener(OnEditInput);

        _playButton.onClick.AddListener(OnStartGame);
        _playButton.interactable = false;
    }

    private void OnEditInput(string text)
    {
        _playButton.interactable = text.Length >= 4;
    }

    private void OnStartGame()
    {
        PlayerLog.SetName(_playerNameInputField.text);

        SceneManager.LoadScene("Game");
    }
}