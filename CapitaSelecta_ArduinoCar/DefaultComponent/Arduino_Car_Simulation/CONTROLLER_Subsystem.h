/*********************************************************************
	Rhapsody	: 8.1.3 
	Login		: Tanmay
	Component	: DefaultComponent 
	Configuration 	: Arduino_Car_Simulation
	Model Element	: CONTROLLER_Subsystem
//!	Generated Date	: Tue, 28, Jun 2016  
	File Path	: DefaultComponent\Arduino_Car_Simulation\CONTROLLER_Subsystem.h
*********************************************************************/

#ifndef CONTROLLER_Subsystem_H
#define CONTROLLER_Subsystem_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "ArduiniCar_Structure.h"
//## link itsArduino_Controller
class Arduino_Controller;

//## link itsH_Bridge
class H_Bridge;

//## package ArduiniCar_Structure

//## class CONTROLLER_Subsystem
class CONTROLLER_Subsystem {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCONTROLLER_Subsystem;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    CONTROLLER_Subsystem(void);
    
    //## auto_generated
    ~CONTROLLER_Subsystem(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Arduino_Controller* getItsArduino_Controller(void) const;
    
    //## auto_generated
    void setItsArduino_Controller(Arduino_Controller* const p_Arduino_Controller);
    
    //## auto_generated
    const H_Bridge* getItsH_Bridge(void) const;
    
    //## auto_generated
    void setItsH_Bridge(H_Bridge* const p_H_Bridge);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Arduino_Controller* itsArduino_Controller;		//## link itsArduino_Controller
    
    H_Bridge* itsH_Bridge;		//## link itsH_Bridge
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCONTROLLER_Subsystem : virtual public AOMInstance {
    DECLARE_META(CONTROLLER_Subsystem, OMAnimatedCONTROLLER_Subsystem)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Arduino_Car_Simulation\CONTROLLER_Subsystem.h
*********************************************************************/
