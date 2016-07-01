/********************************************************************
	Rhapsody	: 8.1.3 
	Login		: Tanmay
	Component	: DefaultComponent 
	Configuration 	: Arduino_Car_Simulation
	Model Element	: POWER_Subsystem
//!	Generated Date	: Tue, 28, Jun 2016  
	File Path	: DefaultComponent\Arduino_Car_Simulation\POWER_Subsystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "POWER_Subsystem.h"
//#[ ignore
#define ArduiniCar_Structure_POWER_Subsystem_POWER_Subsystem_SERIALIZE OM_NO_OP
//#]

//## package ArduiniCar_Structure

//## class POWER_Subsystem
POWER_Subsystem::POWER_Subsystem(void) {
    NOTIFY_CONSTRUCTOR(POWER_Subsystem, POWER_Subsystem(), 0, ArduiniCar_Structure_POWER_Subsystem_POWER_Subsystem_SERIALIZE);
}

POWER_Subsystem::~POWER_Subsystem(void) {
    NOTIFY_DESTRUCTOR(~POWER_Subsystem, true);
}

const Battery* POWER_Subsystem::getItsBattery(void) const {
    return &itsBattery;
}

Rhp_int32_t POWER_Subsystem::getItsDC_Motor(void) const {
    Rhp_int32_t iter = 0;
    return iter;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPOWER_Subsystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsBattery", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsBattery);
    aomsRelations->addRelation("itsDC_Motor", true, false);
    {
        Rhp_int32_t iter = 0;
        while (iter < 4){
            aomsRelations->ADD_ITEM(((DC_Motor*)&myReal->itsDC_Motor[iter]));
            iter++;
        }
    }
}
//#]

IMPLEMENT_META_P(POWER_Subsystem, ArduiniCar_Structure, ArduiniCar_Structure, false, OMAnimatedPOWER_Subsystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Arduino_Car_Simulation\POWER_Subsystem.cpp
*********************************************************************/
