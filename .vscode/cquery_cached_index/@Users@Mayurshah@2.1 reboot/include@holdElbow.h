#ifndef _HOLDELBOW_H_
#define _HOLDELBOW_H_

#include "main.h"
#include "elbow.h"

void holdElbow(int angle)
{
  encoderReset(elbowEncoder);
  int TARGET = 50;
  int Kp = 20;
  int MAX_OUT = 65;
  int error = 0;
  int output = 0;

  	 printf("encoderValue = %d", encoderGet(elbowEncoder));
     error = TARGET - encoderGet(elbowEncoder);
    output = Kp * error;
    if(abs(error) < MAX_OUT){
      elbowSet(output);
    }
    else{
      elbowSet(output/abs(output)*MAX_OUT);
    }

 printf("HoldElbow function called");
 }

#endif
