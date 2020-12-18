

#include "main.h"


void initializeIO() {
  pinMode(SHOULDER_LIMIT, INPUT);
  pinMode(ELBOW_LIMIT, INPUT);
}


void initialize() {
  shoulderEncoder = encoderInit(1 ,2 , false );
  elbowEncoder = encoderInit(8 ,9 , false );
}
