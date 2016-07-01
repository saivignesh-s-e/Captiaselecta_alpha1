/*********************************************************************
	Rhapsody	: 8.1.3 
	Login		: Tanmay
	Component	: DefaultComponent 
	Configuration 	: Arduino_Car_Simulation
	Model Element	: Arduino_Car
//!	Generated Date	: Tue, 28, Jun 2016  
	File Path	: DefaultComponent\Arduino_Car_Simulation\Arduino_Car.h
*********************************************************************/

#ifndef Arduino_Car_H
#define Arduino_Car_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "ArduiniCar_Structure.h"
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## classInstance itsChassis
#include "Chassis.h"
//## classInstance itsCONTROLLER_Subsystem
#include "CONTROLLER_Subsystem.h"
//## classInstance itsPOWER_Subsystem
#include "POWER_Subsystem.h"
//## classInstance itsUltrasonic_Sensor
#include "Ultrasonic_Sensor.h"
//## classInstance itsWheels
#include "Wheels.h"
//## package ArduiniCar_Structure

//## class Arduino_Car
class Arduino_Car : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedArduino_Car;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit Arduino_Car(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~Arduino_Car(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const CONTROLLER_Subsystem* getItsCONTROLLER_Subsystem(void) const;
    
    //## auto_generated
    const Chassis* getItsChassis(void) const;
    
    //## auto_generated
    const POWER_Subsystem* getItsPOWER_Subsystem(void) const;
    
    //## auto_generated
    const Ultrasonic_Sensor* getItsUltrasonic_Sensor(void) const;
    
    //## auto_generated
    const Ultrasonic_Sensor* getItsUltrasonic_Sensor_1(void) const;
    
    //## auto_generated
    const Wheels* getItsWheels(void) const;
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    ////    Relations and components    ////

private :

    CONTROLLER_Subsystem itsCONTROLLER_Subsystem;		//## classInstance itsCONTROLLER_Subsystem
    
    Chassis itsChassis;		//## classInstance itsChassis
    
    POWER_Subsystem itsPOWER_Subsystem;		//## classInstance itsPOWER_Subsystem
    
    Ultrasonic_Sensor itsUltrasonic_Sensor;		//## classInstance itsUltrasonic_Sensor
    
    Ultrasonic_Sensor itsUltrasonic_Sensor_1;		//## classInstance itsUltrasonic_Sensor_1
    
    Wheels itsWheels;		//## classInstance itsWheels
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum Arduino_Car_Enum {
        OMNonState = 0
    };
//#]

private :

//#[ ignore
    Arduino_Car_Enum rootState_subState;
    
    Arduino_Car_Enum rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedArduino_Car : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Arduino_Car, OMAnimatedArduino_Car)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean Arduino_Car::rootState_IN(void) const {
    return true;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\Arduino_Car_Simulation\Arduino_Car.h
*********************************************************************/
