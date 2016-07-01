/*********************************************************************
	Rhapsody	: 8.1.3 
	Login		: Tanmay
	Component	: DefaultComponent 
	Configuration 	: Arduino_Car_Simulation
	Model Element	: H_Bridge
//!	Generated Date	: Tue, 28, Jun 2016  
	File Path	: DefaultComponent\Arduino_Car_Simulation\H_Bridge.h
*********************************************************************/

#ifndef H_Bridge_H
#define H_Bridge_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "ArduiniCar_Structure.h"
//## package ArduiniCar_Structure

//## class H_Bridge
class H_Bridge {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedH_Bridge;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    H_Bridge(void);
    
    //## auto_generated
    ~H_Bridge(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedH_Bridge : virtual public AOMInstance {
    DECLARE_META(H_Bridge, OMAnimatedH_Bridge)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Arduino_Car_Simulation\H_Bridge.h
*********************************************************************/
