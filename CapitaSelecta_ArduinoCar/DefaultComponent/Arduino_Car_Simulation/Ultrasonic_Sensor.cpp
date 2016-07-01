/********************************************************************
	Rhapsody	: 8.1.3 
	Login		: Tanmay
	Component	: DefaultComponent 
	Configuration 	: Arduino_Car_Simulation
	Model Element	: Ultrasonic_Sensor
//!	Generated Date	: Tue, 28, Jun 2016  
	File Path	: DefaultComponent\Arduino_Car_Simulation\Ultrasonic_Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Ultrasonic_Sensor.h"
//#[ ignore
#define ArduiniCar_Structure_Ultrasonic_Sensor_Ultrasonic_Sensor_SERIALIZE OM_NO_OP
//#]

//## package ArduiniCar_Structure

//## class Ultrasonic_Sensor
Ultrasonic_Sensor::Ultrasonic_Sensor(void) : itsServo_Motor(NULL) {
    NOTIFY_CONSTRUCTOR(Ultrasonic_Sensor, Ultrasonic_Sensor(), 0, ArduiniCar_Structure_Ultrasonic_Sensor_Ultrasonic_Sensor_SERIALIZE);
}

Ultrasonic_Sensor::~Ultrasonic_Sensor(void) {
    NOTIFY_DESTRUCTOR(~Ultrasonic_Sensor, true);
    cleanUpRelations();
}

const Servo_Motor* Ultrasonic_Sensor::getItsServo_Motor(void) const {
    return itsServo_Motor;
}

void Ultrasonic_Sensor::setItsServo_Motor(Servo_Motor* const p_Servo_Motor) {
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

const Servo_Motor* Ultrasonic_Sensor::getItsServo_Motor_1(void) const {
    return &itsServo_Motor_1;
}

void Ultrasonic_Sensor::cleanUpRelations(void) {
    if(itsServo_Motor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsServo_Motor");
            itsServo_Motor = NULL;
        }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUltrasonic_Sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsServo_Motor", false, true);
    if(myReal->itsServo_Motor)
        {
            aomsRelations->ADD_ITEM(myReal->itsServo_Motor);
        }
    aomsRelations->addRelation("itsServo_Motor_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsServo_Motor_1);
}
//#]

IMPLEMENT_META_P(Ultrasonic_Sensor, ArduiniCar_Structure, ArduiniCar_Structure, false, OMAnimatedUltrasonic_Sensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Arduino_Car_Simulation\Ultrasonic_Sensor.cpp
*********************************************************************/
