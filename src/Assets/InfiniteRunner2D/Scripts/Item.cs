using UnityEngine;

[RequireComponent(typeof(Animator))]
public class Item : MonoBehaviour
{
    private readonly int _hashCollect = Animator.StringToHash("Collect");
    private readonly int _hashNormalize = Animator.StringToHash("Normalize");

    private Animator _animator;

    /// <summary>
    /// Gold = 3.
    /// Silver = 2.
    /// Bronze = 1.
    /// </summary>
    [SerializeField]
    private int _value;

    public delegate void AfterCollectItem(int value);
    private event AfterCollectItem _onAfterCollectItem;

    private void OnEnable()
    {
        _animator = GetComponent<Animator>();
    }

    private void OnBecameInvisible()
    {
        _animator.SetTrigger(_hashNormalize);

        gameObject.SetActive(false);
    }

    public void OnCollected(AfterCollectItem onAfterCollectItem)
    {
        _onAfterCollectItem = onAfterCollectItem;

        _animator.SetTrigger(_hashCollect);
    }

    /// <summary>
    /// Method called by animation event (Coin animator + CoinShrink animation).
    /// </summary>
    public void AfterCollected()
    {
        _onAfterCollectItem(_value);
        _onAfterCollectItem = null;
    }
}