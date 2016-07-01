/********************************************************************
	Rhapsody	: 8.1.3 
	Login		: Tanmay
	Component	: DefaultComponent 
	Configuration 	: Arduino_Car_Simulation
	Model Element	: Servo_Motor
//!	Generated Date	: Tue, 28, Jun 2016  
	File Path	: DefaultComponent\Arduino_Car_Simulation\Servo_Motor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Servo_Motor.h"
//## link itsBattery
#include "Battery.h"
//#[ ignore
#define ArduiniCar_Structure_Servo_Motor_Servo_Motor_SERIALIZE OM_NO_OP
//#]

//## package ArduiniCar_Structure

//## class Servo_Motor
Servo_Motor::Servo_Motor(void) : itsBattery(NULL) {
    NOTIFY_CONSTRUCTOR(Servo_Motor, Servo_Motor(), 0, ArduiniCar_Structure_Servo_Motor_Servo_Motor_SERIALIZE);
}

Servo_Motor::~Servo_Motor(void) {
    NOTIFY_DESTRUCTOR(~Servo_Motor, true);
    cleanUpRelations();
}

const Battery* Servo_Motor::getItsBattery(void) const {
    return itsBattery;
}

void Servo_Motor::setItsBattery(Battery* const p_Battery) {
    if(p_Battery != NULL)
        {
            p_Battery->_setItsServo_Motor(this);
        }
    _setItsBattery(p_Battery);
}

void Servo_Motor::cleanUpRelations(void) {
    if(itsBattery != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsBattery");
            const Servo_Motor* p_Servo_Motor = itsBattery->getItsServo_Motor();
            if(p_Servo_Motor != NULL)
                {
                    itsBattery->__setItsServo_Motor(NULL);
                }
            itsBattery = NULL;
        }
}

void Servo_Motor::__setItsBattery(Battery* const p_Battery) {
    itsBattery = p_Battery;
    if(p_Battery != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsBattery", p_Battery, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsBattery");
        }
}

void Servo_Motor::_setItsBattery(Battery* const p_Battery) {
    if(itsBattery != NULL)
        {
            itsBattery->__setItsServo_Motor(NULL);
        }
    __setItsBattery(p_Battery);
}

void Servo_Motor::_clearItsBattery(void) {
    NOTIFY_RELATION_CLEARED("itsBattery");
    itsBattery = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedServo_Motor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsBattery", false, true);
    if(myReal->itsBattery)
        {
            aomsRelations->ADD_ITEM(myReal->itsBattery);
        }
}
//#]

IMPLEMENT_META_P(Servo_Motor, ArduiniCar_Structure, ArduiniCar_Structure, false, OMAnimatedServo_Motor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Arduino_Car_Simulation\Servo_Motor.cpp
*********************************************************************/
