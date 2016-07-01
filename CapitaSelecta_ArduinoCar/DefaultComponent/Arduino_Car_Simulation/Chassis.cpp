/********************************************************************
	Rhapsody	: 8.1.3 
	Login		: Tanmay
	Component	: DefaultComponent 
	Configuration 	: Arduino_Car_Simulation
	Model Element	: Chassis
//!	Generated Date	: Tue, 28, Jun 2016  
	File Path	: DefaultComponent\Arduino_Car_Simulation\Chassis.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Chassis.h"
//#[ ignore
#define ArduiniCar_Structure_Chassis_Chassis_SERIALIZE OM_NO_OP
//#]

//## package ArduiniCar_Structure

//## class Chassis
Chassis::Chassis(void) {
    NOTIFY_CONSTRUCTOR(Chassis, Chassis(), 0, ArduiniCar_Structure_Chassis_Chassis_SERIALIZE);
}

Chassis::~Chassis(void) {
    NOTIFY_DESTRUCTOR(~Chassis, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Chassis, ArduiniCar_Structure, ArduiniCar_Structure, false, OMAnimatedChassis)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Arduino_Car_Simulation\Chassis.cpp
*********************************************************************/
