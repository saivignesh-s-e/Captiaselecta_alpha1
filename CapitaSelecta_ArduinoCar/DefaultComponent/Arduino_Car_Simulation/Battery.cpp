/********************************************************************
	Rhapsody	: 8.1.3 
	Login		: Tanmay
	Component	: DefaultComponent 
	Configuration 	: Arduino_Car_Simulation
	Model Element	: Battery
//!	Generated Date	: Tue, 28, Jun 2016  
	File Path	: DefaultComponent\Arduino_Car_Simulation\Battery.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Battery.h"
//## link itsServo_Motor
#include "Servo_Motor.h"
//#[ ignore
#define ArduiniCar_Structure_Battery_Battery_SERIALIZE OM_NO_OP
//#]

//## package ArduiniCar_Structure

//## class Battery
Battery::Battery(void) : itsServo_Motor(NULL) {
    NOTIFY_CONSTRUCTOR(Battery, Battery(), 0, ArduiniCar_Structure_Battery_Battery_SERIALIZE);
}

Battery::~Battery(void) {
    NOTIFY_DESTRUCTOR(~Battery, true);
    cleanUpRelations();
}

const Servo_Motor* Battery::getItsServo_Motor(void) const {
    return itsServo_Motor;
}

void Battery::setItsServo_Motor(Servo_Motor* const p_Servo_Motor) {
    if(p_Servo_Motor != NULL)
        {
            p_Servo_Motor->_setItsBattery(this);
        }
    _setItsServo_Motor(p_Servo_Motor);
}

void Battery::cleanUpRelations(void) {
    if(itsServo_Motor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsServo_Motor");
            const Battery* p_Battery = itsServo_Motor->getItsBattery();
            if(p_Battery != NULL)
                {
                    itsServo_Motor->__setItsBattery(NULL);
                }
            itsServo_Motor = NULL;
        }
}

void Battery::__setItsServo_Motor(Servo_Motor* const p_Servo_Motor) {
    itsServo_Motor = p_Servo_Motor;
    if(p_Servo_Motor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsServo_Motor", p_Servo_Motor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsServo_Motor");
        }
}

void Battery::_setItsServo_Motor(Servo_Motor* const p_Servo_Motor) {
    if(itsServo_Motor != NULL)
        {
            itsServo_Motor->__setItsBattery(NULL);
        }
    __setItsServo_Motor(p_Servo_Motor);
}

void Battery::_clearItsServo_Motor(void) {
    NOTIFY_RELATION_CLEARED("itsServo_Motor");
    itsServo_Motor = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedBattery::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsServo_Motor", false, true);
    if(myReal->itsServo_Motor)
        {
            aomsRelations->ADD_ITEM(myReal->itsServo_Motor);
        }
}
//#]

IMPLEMENT_META_P(Battery, ArduiniCar_Structure, ArduiniCar_Structure, false, OMAnimatedBattery)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Arduino_Car_Simulation\Battery.cpp
*********************************************************************/
