/* ==============================================================================
System Name:  	HVPM_Sensorless

File Name:		HVPM_Sensorless.h

Description:	Primary system header file for the Real Implementation of Sensorless  
          		Field Orientation Control for a Three Phase Permanent-Magnet
          		Synchronous Motor 

=================================================================================  */

/*-------------------------------------------------------------------------------
Next, Include project specific include files.
-------------------------------------------------------------------------------*/

#include "smopos.h"       		// Include header for the SMOPOS object 
#include "smopos_const.h"       // Include header for the SMOPOS object
#include "park.h"       		// Include header for the PARK object 
#include "ipark.h"       		// Include header for the IPARK object 
#include "pi.h"       	// Include header for the PIDREG3 object 
#include "clarke.h"         	// Include header for the CLARKE object 
#include "svgen.h"       	// Include header for the SVGENDQ object 
#include "rampgen.h"        	// Include header for the RAMPGEN object 
#include "rmp_cntl.h"       	// Include header for the RMPCNTL object 
#include "volt_calc.h"      	// Include header for the PHASEVOLTAGE object 
#include "speed_est.h"          // Include header for the SPEED_ESTIMATION object 
#include "speed_fr.h"			// Include header for the SPEED_MEAS_QEP object

#if (DSP2803x_DEVICE_H==1)
#include "f2803xileg_vdc.h" 	// Include header for the ILEG2DCBUSMEAS object 
#include "f2803xpwm.h"        	// Include header for the PWMGEN object
#include "f2803xpwmdac.h"       // Include header for the PWMGEN object
#include "f2803xqep.h"        	// Include header for the QEP object
#include "DSP2803x_EPwm_defines.h" // Include header for PWM defines
#endif

#if (DSP2833x_DEVICE_H==1)
#include "f2833xpwm.h"
#include "f2833xpwmdac.h"       // Include header for the PWMGEN object
#include "f2833xqep.h"        	// Include header for the QEP object
#include "f2833xileg_vdc.h" 	// Include header for the ILEG2DCBUSMEAS object
#include "DSP2833x_EPwm_defines.h" // Include header for PWM defines
#endif
#include "dlog4ch-HVPM_Sensorless.h"	// Include header for the DLOG_4CH object

//===========================================================================
// No more.
//===========================================================================
