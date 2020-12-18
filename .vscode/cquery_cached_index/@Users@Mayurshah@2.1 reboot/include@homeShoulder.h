#ifndef _HOMESHOULDER_H_
#define _HOMESHOULDER_H_

#include "main.h"
#include "shoulder.h"

void homeShoulder(int homePosition)
{
  printf("homing started, stand by \n");
  printf("the limit switch is %d \n",digitalRead (3));
  while (digitalRead(3)==1){
  shoulderSet(-60);
  }
  shoulderSet(0);
  //reset sholderEncoder
  //start while loop with condition sholderEncoder < homePosition(or another home position)
  //turn on shouldMoter in pos direction
  //wait untill sholderEncoder < homePosition (or other home position)
  //stop sholderMotor (the shoulder joint is now "homed") }

  printf("homing complete \n");
 }

#endif
