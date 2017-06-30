/* =================================================================================
File name  : HVPM_Sensorless-Settings.H                     
                
Description: Incremental Build Level control file.
=================================================================================  */

#ifndef PROJ_SETTINGS_H

/*------------------------------------------------------------------------------
Following is the list of the Build Level choices.
------------------------------------------------------------------------------*/
#define LEVEL1  1      		// Module check out (do not connect the motors) 
#define LEVEL2  2           // Verify ADC, park/clarke, calibrate the offset 
#define LEVEL3  3           // Verify closed current(torque) loop and PIDs and speed measurement
#define LEVEL4  4           // Verify speed estimation and rotor position est.
#define LEVEL5  5           // Verify close speed loop and speed PID
#define LEVEL6  6           // Verify close speed loop sensorless

/*------------------------------------------------------------------------------
This line sets the BUILDLEVEL to one of the available choices.
------------------------------------------------------------------------------*/
#define   BUILDLEVEL LEVEL6


#ifndef BUILDLEVEL    
#error  Critical: BUILDLEVEL must be defined !!
#endif  // BUILDLEVEL
//------------------------------------------------------------------------------


#ifndef TRUE
#define FALSE 0
#define TRUE  1
#endif

#define PI 3.14159265358979

// Define the system frequency (MHz)
#if (DSP2803x_DEVICE_H==1)
#define SYSTEM_FREQUENCY 60
#elif (DSP2833x_DEVICE_H==1)
#define SYSTEM_FREQUENCY 150
#endif


//Define system Math Type
// Select Floating Math Type for 2833x
// Select IQ Math Type for 2803x 
#if (DSP2803x_DEVICE_H==1)
#define MATH_TYPE 0 
#elif (DSP2833x_DEVICE_H==1)
#define MATH_TYPE 1
#endif


// Define the ISR frequency (kHz)
#define ISR_FREQUENCY 10

// Define the electrical motor parametes (Estun Servomotor)
#define RS 		2.35		    	    // Stator resistance (ohm) 
#define RR   			               	// Rotor resistance (ohm) 
#define LS   	0.0065					// Stator inductance (H) 
#define LR   			  				// Rotor inductance (H) 	
#define LM   			   				// Magnatizing inductance (H)
#define POLES  	8						// Number of poles
										// Number of poles

// Define the base quantites
#define BASE_VOLTAGE    236.14        // Base peak phase voltage (volt), Vdc/sqrt(3)
#define BASE_CURRENT    10            // Base peak phase current (amp), Max. measurable peak curr.
#define BASE_TORQUE     		      // Base torque (N.m)
#define BASE_FLUX       			  // Base flux linkage (volt.sec/rad)
#define BASE_FREQ      	200           // Base electrical frequency (Hz) 

#endif

