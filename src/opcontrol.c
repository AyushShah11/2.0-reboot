
#include "main.h"
#include "chassis.h"
#include "claw.h"
#include "shoulder.h"
#include "wrist.h"
#include "elbow.h"
#include "homeShoulder.h"
#include "homeElbow.h"
#include "holdElbow.h"
#include "holdShoulder.h"


void operatorControl() {
		printf("I'm woking\n");
		   int loopCount = 0; //just a loop counter
			 int power, turn;
		   while(1) {
		       //drive base control
		   power = joystickGetAnalog(1, 2); // vertical axis on left joystick
		  turn  = joystickGetAnalog(1, 1); // horizontal axis on left joystick
	  chassisSet(power + turn, power - turn);

					 // controll claw with CH4 of joystick
		clawSet(joystickGetAnalog(1, 4));

					// control shoulder motor with button 6U and 6D
		if(joystickGetDigital(1, 6, JOY_UP)) {
			shoulderSet(127); // pressing up, so shoulder should go up
			}
		else if(joystickGetDigital(1, 6, JOY_DOWN)) {
		    shoulderSet(-127); // pressing down, so shoulder should go down
			}
		else {
		holdShoulder(0); // no buttons are pressed, stop the shoulder
		  }

		// control elbow motor with button 5U and 5D
		if(joystickGetDigital(1, 5, JOY_UP)) {
		elbowSet(127); // pressing up, so elbow should go up
		  }
		else if(joystickGetDigital(1, 5, JOY_DOWN)) {
		elbowSet(-127); // pressing down, so elbow should go down
		  }
		else{
		elbowSet(0); // no buttons pressed, stop the elbow
		  }

		if(joystickGetDigital(1, 7, JOY_UP)) {
			wristSet(127); // pressing up, so elbow should go up
				}
	  else if(joystickGetDigital(1, 7, JOY_DOWN)) {
			wristSet(-127); // pressing down, so elbow should go down
				}
		else{
			wristSet(0); // no buttons pressed, stop the elbow
				}

		if(joystickGetDigital(1, 8, JOY_UP)){
			homeShoulder(127);
		}


		if(joystickGetDigital(1, 8, JOY_DOWN)){
			homeElbow(127);
		}


		delay(20);
	}
}
