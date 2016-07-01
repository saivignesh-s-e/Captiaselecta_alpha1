/*********************************************************************
	Rhapsody	: 8.1.3 
	Login		: Tanmay
	Component	: DefaultComponent 
	Configuration 	: Arduino_Car_Simulation
	Model Element	: Wheels
//!	Generated Date	: Tue, 28, Jun 2016  
	File Path	: DefaultComponent\Arduino_Car_Simulation\Wheels.h
*********************************************************************/

#ifndef Wheels_H
#define Wheels_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "ArduiniCar_Structure.h"
//## package ArduiniCar_Structure

//## class Wheels
class Wheels {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedWheels;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Wheels(void);
    
    //## auto_generated
    ~Wheels(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedWheels : virtual public AOMInstance {
    DECLARE_META(Wheels, OMAnimatedWheels)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Arduino_Car_Simulation\Wheels.h
*********************************************************************/
