using UnityEngine;

public class DoorLock : MonoBehaviour
{
	public Door parentDoor;

	public void Open()
	{
		if (parentDoor != null)
		{
			parentDoor.LockOpen();
		}
	}

	public void Close()
	{
		if (parentDoor != null)
		{
			parentDoor.LockClose();
		}
	}
}
