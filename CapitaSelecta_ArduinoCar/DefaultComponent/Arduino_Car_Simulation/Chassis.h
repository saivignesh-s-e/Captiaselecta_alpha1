/*********************************************************************
	Rhapsody	: 8.1.3 
	Login		: Tanmay
	Component	: DefaultComponent 
	Configuration 	: Arduino_Car_Simulation
	Model Element	: Chassis
//!	Generated Date	: Tue, 28, Jun 2016  
	File Path	: DefaultComponent\Arduino_Car_Simulation\Chassis.h
*********************************************************************/

#ifndef Chassis_H
#define Chassis_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "ArduiniCar_Structure.h"
//## package ArduiniCar_Structure

//## class Chassis
class Chassis {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedChassis;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Chassis(void);
    
    //## auto_generated
    ~Chassis(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedChassis : virtual public AOMInstance {
    DECLARE_META(Chassis, OMAnimatedChassis)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Arduino_Car_Simulation\Chassis.h
*********************************************************************/
