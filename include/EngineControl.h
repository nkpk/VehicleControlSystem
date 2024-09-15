#ifndef ENGINE_CONTROL_H
#define ENGINE_CONTROL_H

#include "CANBus.h"

// Function prototypes
void processEngineControl(const CANMessage* message);
void sendEngineStatus();

#endif // ENGINE_CONTROL_H
