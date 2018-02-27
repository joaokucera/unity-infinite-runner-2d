using UnityEngine;

public class GameManager : MonoBehaviour
{
    private ParallaxSystem[] _parallaxSystems;
    private SpawningSystem[] _spawningSystems;
    private bool _isAnyKeyDownPressed;

    [SerializeField]
    private PlayerMovement _player;
    [SerializeField]
    private UIManager _uiManager;

    private void Awake()
    {
        _parallaxSystems = FindObjectsOfType<ParallaxSystem>();
        _spawningSystems = FindObjectsOfType<SpawningSystem>();

        EnableScripts(false);
    }

    private void Update()
    {
        if (Input.anyKeyDown && !_isAnyKeyDownPressed) {
            _isAnyKeyDownPressed = true;
            
            EnableScripts(true);
        }
    }

    public void EnableScripts(bool enable)
    {
        for (int i = 0; i < _parallaxSystems.Length; i++) {
            _parallaxSystems[i].enabled = enable;
        }

        for (int i = 0; i < _spawningSystems.Length; i++) {
            _spawningSystems[i].enabled = enable;

            if (!enable) {
                _spawningSystems[i].StopSpawing();
            }
        }

        _player.enabled = enable;
        _uiManager.enabled = enable;
    }
}