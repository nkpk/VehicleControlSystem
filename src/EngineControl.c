#include "EngineControl.h"
#include <stdio.h>

// Process engine control CAN messages
void processEngineControl(const CANMessage* message) {
    if (message->id == 0x101) {
            // Example: Adjust engine RPM based on the received message
                    uint8_t rpm = message->data[0];
                            printf("Adjusting Engine RPM to: %d\n", rpm);
                                }
                                }

                                // Send engine status over the CAN bus
                                void sendEngineStatus() {
                                    CANMessage message;
                                        message.id = 0x201;
                                            message.length = 2;
                                                message.data[0] = 0x50;  // Example engine status
                                                    message.data[1] = 0x20;  // Example oil temperature
                                                        sendCANMessage(&message);
                                                        }
                                                        