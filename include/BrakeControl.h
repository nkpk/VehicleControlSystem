#ifndef BRAKE_CONTROL_H
#define BRAKE_CONTROL_H

#include "CANBus.h"

// Function prototypes
void processBrakeControl(const CANMessage* message);
void sendBrakeStatus();

#endif // BRAKE_CONTROL_H
