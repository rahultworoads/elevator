//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Floor.h
//  @ Date : 6/3/2014
//  @ Author : 
//
//


#if !defined(_FLOOR_H)
#define _FLOOR_H

#include "Door.h"
#include "Button.h"
#include "Display.h"
//#include "ElevatorSystem.h"


class Floor {
public:
    Floor(Button* fButton, Door* door);
    void openDoors();
    void closeDoors();
    //void attachToButton(ElevatorSystem* elSystem);
private:
    int m_number;
    Button* m_button;
    Door* m_door;
    Display* m_display;

};

#endif  //_FLOOR_H
