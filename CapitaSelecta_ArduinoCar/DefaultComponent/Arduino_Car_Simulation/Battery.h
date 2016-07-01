/*********************************************************************
	Rhapsody	: 8.1.3 
	Login		: Tanmay
	Component	: DefaultComponent 
	Configuration 	: Arduino_Car_Simulation
	Model Element	: Battery
//!	Generated Date	: Tue, 28, Jun 2016  
	File Path	: DefaultComponent\Arduino_Car_Simulation\Battery.h
*********************************************************************/

#ifndef Battery_H
#define Battery_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "ArduiniCar_Structure.h"
//## link itsServo_Motor
class Servo_Motor;

//## package ArduiniCar_Structure

//## class Battery
class Battery {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedBattery;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Battery(void);
    
    //## auto_generated
    ~Battery(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Servo_Motor* getItsServo_Motor(void) const;
    
    //## auto_generated
    void setItsServo_Motor(Servo_Motor* const p_Servo_Motor);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Servo_Motor* itsServo_Motor;		//## link itsServo_Motor
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsServo_Motor(Servo_Motor* const p_Servo_Motor);
    
    //## auto_generated
    void _setItsServo_Motor(Servo_Motor* const p_Servo_Motor);
    
    //## auto_generated
    void _clearItsServo_Motor(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedBattery : virtual public AOMInstance {
    DECLARE_META(Battery, OMAnimatedBattery)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Arduino_Car_Simulation\Battery.h
*********************************************************************/
