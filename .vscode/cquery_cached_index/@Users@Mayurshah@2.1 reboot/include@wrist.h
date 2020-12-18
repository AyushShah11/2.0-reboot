#ifndef _WRIST_H_
#define _WRIST_H_

#include "main.h"

void wristSet(int speed)
{
 motorSet(6, speed);
 printf("WristSet function called");
 }

#endif
