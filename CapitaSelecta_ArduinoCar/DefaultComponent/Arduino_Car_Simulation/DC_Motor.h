/*********************************************************************
	Rhapsody	: 8.1.3 
	Login		: Tanmay
	Component	: DefaultComponent 
	Configuration 	: Arduino_Car_Simulation
	Model Element	: DC_Motor
//!	Generated Date	: Tue, 28, Jun 2016  
	File Path	: DefaultComponent\Arduino_Car_Simulation\DC_Motor.h
*********************************************************************/

#ifndef DC_Motor_H
#define DC_Motor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "ArduiniCar_Structure.h"
//## package ArduiniCar_Structure

//## class DC_Motor
class DC_Motor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDC_Motor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DC_Motor(void);
    
    //## auto_generated
    ~DC_Motor(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDC_Motor : virtual public AOMInstance {
    DECLARE_META(DC_Motor, OMAnimatedDC_Motor)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Arduino_Car_Simulation\DC_Motor.h
*********************************************************************/
