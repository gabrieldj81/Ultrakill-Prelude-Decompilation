using UnityEngine;

public class BreakBreakables : MonoBehaviour
{
	public Breakable[] breakables;

	public float delay;

	private int i;

	private void Start()
	{
		if (breakables.Length != 0)
		{
			Break();
		}
	}

	private void Break()
	{
		if (i < breakables.Length)
		{
			if (breakables[i] != null)
			{
				breakables[i].Break();
			}
			i++;
			if (delay != 0f)
			{
				Invoke("Break", delay);
			}
			else
			{
				Break();
			}
		}
		else
		{
			Object.Destroy(this);
		}
	}
}
