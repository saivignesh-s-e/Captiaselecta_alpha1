/********************************************************************
	Rhapsody	: 8.1.3 
	Login		: Tanmay
	Component	: DefaultComponent 
	Configuration 	: Arduino_Car_Simulation
	Model Element	: Arduino_Car
//!	Generated Date	: Tue, 28, Jun 2016  
	File Path	: DefaultComponent\Arduino_Car_Simulation\Arduino_Car.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Arduino_Car.h"
//#[ ignore
#define ArduiniCar_Structure_Arduino_Car_Arduino_Car_SERIALIZE OM_NO_OP
//#]

//## package ArduiniCar_Structure

//## class Arduino_Car
Arduino_Car::Arduino_Car(IOxfActive* const theActiveContext) : OMReactive() {
    NOTIFY_REACTIVE_CONSTRUCTOR(Arduino_Car, Arduino_Car(), 0, ArduiniCar_Structure_Arduino_Car_Arduino_Car_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

Arduino_Car::~Arduino_Car(void) {
    NOTIFY_DESTRUCTOR(~Arduino_Car, true);
}

const CONTROLLER_Subsystem* Arduino_Car::getItsCONTROLLER_Subsystem(void) const {
    return &itsCONTROLLER_Subsystem;
}

const Chassis* Arduino_Car::getItsChassis(void) const {
    return &itsChassis;
}

const POWER_Subsystem* Arduino_Car::getItsPOWER_Subsystem(void) const {
    return &itsPOWER_Subsystem;
}

const Ultrasonic_Sensor* Arduino_Car::getItsUltrasonic_Sensor(void) const {
    return &itsUltrasonic_Sensor;
}

const Ultrasonic_Sensor* Arduino_Car::getItsUltrasonic_Sensor_1(void) const {
    return &itsUltrasonic_Sensor_1;
}

const Wheels* Arduino_Car::getItsWheels(void) const {
    return &itsWheels;
}

bool Arduino_Car::startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = OMReactive::startBehavior();
        }
    return done;
}

void Arduino_Car::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Arduino_Car::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
    }
}

IOxfReactive::TakeEventStatus Arduino_Car::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedArduino_Car::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsCONTROLLER_Subsystem", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsCONTROLLER_Subsystem);
    aomsRelations->addRelation("itsPOWER_Subsystem", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsPOWER_Subsystem);
    aomsRelations->addRelation("itsUltrasonic_Sensor", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsUltrasonic_Sensor);
    aomsRelations->addRelation("itsUltrasonic_Sensor_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsUltrasonic_Sensor_1);
    aomsRelations->addRelation("itsChassis", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsChassis);
    aomsRelations->addRelation("itsWheels", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsWheels);
}

void OMAnimatedArduino_Car::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
}
//#]

IMPLEMENT_REACTIVE_META_P(Arduino_Car, ArduiniCar_Structure, ArduiniCar_Structure, false, OMAnimatedArduino_Car)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Arduino_Car_Simulation\Arduino_Car.cpp
*********************************************************************/
