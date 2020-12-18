#ifndef _CHASSIS_H_
#define _CHASSIS_H_

#include "main.h"

void chassisSet(int right, int left)
{
  motorSet(2, left);
  motorSet(3, right);
 printf("ChassisSet function called");
 }

#endif
