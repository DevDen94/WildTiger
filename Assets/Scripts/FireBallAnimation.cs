using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireBallAnimation : MonoBehaviour
{
    //public LineRenderer line;
    public ParticleSystem fireball;
    public static FireBallAnimation instance;
    public float time = .5f;
    public Vector3 offset = Vector3.zero;
    public iTween.EaseType easetype = iTween.EaseType.linear;
    public iTween.LoopType looptype= iTween.LoopType.none;
    public bool lookAt = false;
    Vector3 Target;
    private void Awake()
    {
        if (instance == null)
            instance = this;
    }

    public void moveFireballToTarget(LineRenderer line)
    {
        Target = line.GetPosition(line.positionCount - 1);
        fireball.gameObject.SetActive(true);
        fireball.transform.position = line.GetPosition(0);
        iTween.MoveTo(fireball.gameObject, iTween.Hash("position", line.GetPosition(line.positionCount - 1)+offset, "time", time, "easetype", easetype, "looptype", looptype,"oncomplete",nameof(atEndOfAnimation),"oncompletetarget",gameObject));
    }

    public void moveFireballToTarget(TrailRenderer trail)
    {
        Target = trail.GetPosition(trail.positionCount - 1);

        fireball.gameObject.SetActive(true);
        fireball.transform.position = trail.GetPosition(0);
        iTween.MoveTo(fireball.gameObject, iTween.Hash("position", trail.GetPosition(trail.positionCount - 1)+offset, "time", time, "easetype", easetype, "looptype", looptype, "oncomplete", nameof(atEndOfAnimation), "oncompletetarget", gameObject));

    }

    void atEndOfAnimation()
    {
        Target = Vector3.zero;
        fireball.gameObject.SetActive(false);
    }
    private void Update()
    {
        if (lookAt && fireball.gameObject != null )
        {
            fireball.transform.LookAt(Target);
        }
    }
}
