/********************************************************************
	Rhapsody	: 8.1.3 
	Login		: Tanmay
	Component	: DefaultComponent 
	Configuration 	: Arduino_Car_Simulation
	Model Element	: Wheels
//!	Generated Date	: Tue, 28, Jun 2016  
	File Path	: DefaultComponent\Arduino_Car_Simulation\Wheels.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Wheels.h"
//#[ ignore
#define ArduiniCar_Structure_Wheels_Wheels_SERIALIZE OM_NO_OP
//#]

//## package ArduiniCar_Structure

//## class Wheels
Wheels::Wheels(void) {
    NOTIFY_CONSTRUCTOR(Wheels, Wheels(), 0, ArduiniCar_Structure_Wheels_Wheels_SERIALIZE);
}

Wheels::~Wheels(void) {
    NOTIFY_DESTRUCTOR(~Wheels, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Wheels, ArduiniCar_Structure, ArduiniCar_Structure, false, OMAnimatedWheels)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Arduino_Car_Simulation\Wheels.cpp
*********************************************************************/
