/*********************************************************************
	Rhapsody	: 8.1.3 
	Login		: Tanmay
	Component	: DefaultComponent 
	Configuration 	: Arduino_Car_Simulation
	Model Element	: Ultrasonic_Sensor
//!	Generated Date	: Tue, 28, Jun 2016  
	File Path	: DefaultComponent\Arduino_Car_Simulation\Ultrasonic_Sensor.h
*********************************************************************/

#ifndef Ultrasonic_Sensor_H
#define Ultrasonic_Sensor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "ArduiniCar_Structure.h"
//## classInstance itsServo_Motor_1
#include "Servo_Motor.h"
//## package ArduiniCar_Structure

//## class Ultrasonic_Sensor
class Ultrasonic_Sensor {
#ifdef _OMINSTRUMENT
    OM_DECLARE_COMPOSITE_OFFSET
#endif // _OMINSTRUMENT

    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUltrasonic_Sensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Ultrasonic_Sensor(void);
    
    //## auto_generated
    ~Ultrasonic_Sensor(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Servo_Motor* getItsServo_Motor(void) const;
    
    //## auto_generated
    void setItsServo_Motor(Servo_Motor* const p_Servo_Motor);
    
    //## auto_generated
    const Servo_Motor* getItsServo_Motor_1(void) const;

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Servo_Motor* itsServo_Motor;		//## link itsServo_Motor
    
    Servo_Motor itsServo_Motor_1;		//## classInstance itsServo_Motor_1
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUltrasonic_Sensor : virtual public AOMInstance {
    DECLARE_META(Ultrasonic_Sensor, OMAnimatedUltrasonic_Sensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Arduino_Car_Simulation\Ultrasonic_Sensor.h
*********************************************************************/
