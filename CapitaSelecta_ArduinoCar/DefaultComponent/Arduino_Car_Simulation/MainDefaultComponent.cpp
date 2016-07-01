/********************************************************************
	Rhapsody	: 8.1.3 
	Login		: Tanmay
	Component	: DefaultComponent 
	Configuration 	: Arduino_Car_Simulation
	Model Element	: Arduino_Car_Simulation
//!	Generated Date	: Tue, 28, Jun 2016  
	File Path	: DefaultComponent\Arduino_Car_Simulation\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "Arduino_Car.h"
RhpInteger main( void) {
    RhpInteger status = 0;
    try {
        if(OXF::initialize(0,NULL))
            {
                Arduino_Car p_Arduino_Car;
                p_Arduino_Car.setShouldDelete(false);
                (void) p_Arduino_Car.startBehavior();
                //#[ configuration DefaultComponent::Arduino_Car_Simulation 
                //#]
                OXF::start();
                status = 0;
            }
        else
            {
                status = 1;
            }
    }
    catch (...)
    {
        status = 0;
    }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\Arduino_Car_Simulation\MainDefaultComponent.cpp
*********************************************************************/
