#ifndef INFOTAINMENT_CONTROL_H
#define INFOTAINMENT_CONTROL_H

#include "CANBus.h"

// Function prototypes
void processInfotainmentControl(const CANMessage* message);
void sendInfotainmentStatus();

#endif // INFOTAINMENT_CONTROL_H
