/********************************************************************
	Rhapsody	: 8.1.3 
	Login		: Tanmay
	Component	: DefaultComponent 
	Configuration 	: Arduino_Car_Simulation
	Model Element	: CONTROLLER_Subsystem
//!	Generated Date	: Tue, 28, Jun 2016  
	File Path	: DefaultComponent\Arduino_Car_Simulation\CONTROLLER_Subsystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "CONTROLLER_Subsystem.h"
//## link itsArduino_Controller
#include "Arduino_Controller.h"
//## link itsH_Bridge
#include "H_Bridge.h"
//#[ ignore
#define ArduiniCar_Structure_CONTROLLER_Subsystem_CONTROLLER_Subsystem_SERIALIZE OM_NO_OP
//#]

//## package ArduiniCar_Structure

//## class CONTROLLER_Subsystem
CONTROLLER_Subsystem::CONTROLLER_Subsystem(void) : itsArduino_Controller(NULL), itsH_Bridge(NULL) {
    NOTIFY_CONSTRUCTOR(CONTROLLER_Subsystem, CONTROLLER_Subsystem(), 0, ArduiniCar_Structure_CONTROLLER_Subsystem_CONTROLLER_Subsystem_SERIALIZE);
}

CONTROLLER_Subsystem::~CONTROLLER_Subsystem(void) {
    NOTIFY_DESTRUCTOR(~CONTROLLER_Subsystem, true);
    cleanUpRelations();
}

const Arduino_Controller* CONTROLLER_Subsystem::getItsArduino_Controller(void) const {
    return itsArduino_Controller;
}

void CONTROLLER_Subsystem::setItsArduino_Controller(Arduino_Controller* const p_Arduino_Controller) {
    itsArduino_Controller = p_Arduino_Controller;
    if(p_Arduino_Controller != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsArduino_Controller", p_Arduino_Controller, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsArduino_Controller");
        }
}

const H_Bridge* CONTROLLER_Subsystem::getItsH_Bridge(void) const {
    return itsH_Bridge;
}

void CONTROLLER_Subsystem::setItsH_Bridge(H_Bridge* const p_H_Bridge) {
    itsH_Bridge = p_H_Bridge;
    if(p_H_Bridge != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsH_Bridge", p_H_Bridge, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsH_Bridge");
        }
}

void CONTROLLER_Subsystem::cleanUpRelations(void) {
    if(itsArduino_Controller != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsArduino_Controller");
            itsArduino_Controller = NULL;
        }
    if(itsH_Bridge != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsH_Bridge");
            itsH_Bridge = NULL;
        }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCONTROLLER_Subsystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsH_Bridge", false, true);
    if(myReal->itsH_Bridge)
        {
            aomsRelations->ADD_ITEM(myReal->itsH_Bridge);
        }
    aomsRelations->addRelation("itsArduino_Controller", false, true);
    if(myReal->itsArduino_Controller)
        {
            aomsRelations->ADD_ITEM(myReal->itsArduino_Controller);
        }
}
//#]

IMPLEMENT_META_P(CONTROLLER_Subsystem, ArduiniCar_Structure, ArduiniCar_Structure, false, OMAnimatedCONTROLLER_Subsystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Arduino_Car_Simulation\CONTROLLER_Subsystem.cpp
*********************************************************************/
