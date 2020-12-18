#ifndef _HOLDSHOULDER_H_
#define _HOLDSHOULDER_H_

#include "main.h"
#include "shoulder.h"
void holdShoulder(int angle)
{
  encoderReset(shoulderEncoder);
  int TARGET = 50;
  int Kp = 20;
  int MAX_OUT = 65;
  int error = 0;
  int output = 0;

  	 printf("encoderValue = %d", encoderGet(shoulderEncoder));
     error = TARGET - encoderGet(shoulderEncoder);
    output = Kp * error;
    if(abs(error) < MAX_OUT){
      shoulderSet(output);
    }
    else{
      shoulderSet(output/abs(output)*MAX_OUT);
    }

 printf("HoldShoulder function called");
 }

#endif
