using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WorldMovement : MonoBehaviour
{
    float MoveSpeed;
    // Use this for initialization
    void Start()
    {
        MoveSpeed = 0.1f;

    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKey(KeyCode.S))
        {
            transform.Translate(0, 0, MoveSpeed);
        }
        if (Input.GetKey(KeyCode.D))
        {
            transform.Translate(-MoveSpeed, 0, 0);
        }
        if (Input.GetKey(KeyCode.W))
        {
            transform.Translate(0, 0, -MoveSpeed);
        }
        if (Input.GetKey(KeyCode.A))
        {
            transform.Translate(MoveSpeed, 0, 0);
        }


    }
}