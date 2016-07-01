/*********************************************************************
	Rhapsody	: 8.1.3 
	Login		: Tanmay
	Component	: DefaultComponent 
	Configuration 	: Arduino_Car_Simulation
	Model Element	: Servo_Motor
//!	Generated Date	: Tue, 28, Jun 2016  
	File Path	: DefaultComponent\Arduino_Car_Simulation\Servo_Motor.h
*********************************************************************/

#ifndef Servo_Motor_H
#define Servo_Motor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "ArduiniCar_Structure.h"
//## link itsBattery
class Battery;

//## package ArduiniCar_Structure

//## class Servo_Motor
class Servo_Motor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedServo_Motor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Servo_Motor(void);
    
    //## auto_generated
    ~Servo_Motor(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Battery* getItsBattery(void) const;
    
    //## auto_generated
    void setItsBattery(Battery* const p_Battery);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Battery* itsBattery;		//## link itsBattery
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsBattery(Battery* const p_Battery);
    
    //## auto_generated
    void _setItsBattery(Battery* const p_Battery);
    
    //## auto_generated
    void _clearItsBattery(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedServo_Motor : virtual public AOMInstance {
    DECLARE_META(Servo_Motor, OMAnimatedServo_Motor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Arduino_Car_Simulation\Servo_Motor.h
*********************************************************************/
