/*********************************************************************
	Rhapsody	: 8.1.3 
	Login		: Tanmay
	Component	: DefaultComponent 
	Configuration 	: Arduino_Car_Simulation
	Model Element	: POWER_Subsystem
//!	Generated Date	: Tue, 28, Jun 2016  
	File Path	: DefaultComponent\Arduino_Car_Simulation\POWER_Subsystem.h
*********************************************************************/

#ifndef POWER_Subsystem_H
#define POWER_Subsystem_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "ArduiniCar_Structure.h"
//## classInstance itsBattery
#include "Battery.h"
//## classInstance itsDC_Motor
#include "DC_Motor.h"
//## package ArduiniCar_Structure

//## class POWER_Subsystem
class POWER_Subsystem {
#ifdef _OMINSTRUMENT
    OM_DECLARE_COMPOSITE_OFFSET
#endif // _OMINSTRUMENT

    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPOWER_Subsystem;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    POWER_Subsystem(void);
    
    //## auto_generated
    ~POWER_Subsystem(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Battery* getItsBattery(void) const;
    
    //## auto_generated
    Rhp_int32_t getItsDC_Motor(void) const;
    
    ////    Relations and components    ////

private :

    Battery itsBattery;		//## classInstance itsBattery
    
    DC_Motor itsDC_Motor[4];		//## classInstance itsDC_Motor
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPOWER_Subsystem : virtual public AOMInstance {
    DECLARE_META(POWER_Subsystem, OMAnimatedPOWER_Subsystem)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Arduino_Car_Simulation\POWER_Subsystem.h
*********************************************************************/
