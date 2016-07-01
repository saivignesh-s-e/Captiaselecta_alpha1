/*********************************************************************
	Rhapsody	: 8.1.3 
	Login		: Tanmay
	Component	: DefaultComponent 
	Configuration 	: Arduino_Car_Simulation
	Model Element	: Arduino_Controller
//!	Generated Date	: Tue, 28, Jun 2016  
	File Path	: DefaultComponent\Arduino_Car_Simulation\Arduino_Controller.h
*********************************************************************/

#ifndef Arduino_Controller_H
#define Arduino_Controller_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "ArduiniCar_Structure.h"
//## package ArduiniCar_Structure

//## class Arduino_Controller
class Arduino_Controller {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedArduino_Controller;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Arduino_Controller(void);
    
    //## auto_generated
    ~Arduino_Controller(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedArduino_Controller : virtual public AOMInstance {
    DECLARE_META(Arduino_Controller, OMAnimatedArduino_Controller)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Arduino_Car_Simulation\Arduino_Controller.h
*********************************************************************/
