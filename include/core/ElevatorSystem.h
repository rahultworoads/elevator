//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : ElevatorSystem.h
//  @ Date : 6/3/2014
//  @ Author : 
//
//


#ifndef _ELEVATORSYSTEM_H
#define _ELEVATORSYSTEM_H

#include "Elevator.h"
#include "Scheduler.h"
#include "Floor.h"
#include "Sensor.h"
#include "Button.h"

#include <vector>

#include "Observer.h"

class ElevatorSystem :  public Observer {
public:
    ElevatorSystem(Elevator *el,
                   std::vector<Floor *> floors);

    void updateV(Subject *subject);
    void processButtonChange(Button* button);
    void processSensorChange(Sensor* sensor);

private:
    Elevator* m_elevator;
    Scheduler* m_scheduler;
    std::vector<Floor*> m_floors;

private:
    void callElevator(int floorNumber);
    void floorIntersection(int floorNumber);
    void closeDoors();
    void openDoors();
};

#endif  //_ELEVATORSYSTEM_H
