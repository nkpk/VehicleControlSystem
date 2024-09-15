#include "BrakeControl.h"
#include <stdio.h>

// Process brake control CAN messages
void processBrakeControl(const CANMessage* message) {
    if (message->id == 0x102) {
            // Example: Apply brakes based on received message
                    uint8_t brakePressure = message->data[0];
                            printf("Applying Brake Pressure: %d\n", brakePressure);
                                }
                                }

                                // Send brake system status over CAN bus
                                void sendBrakeStatus() {
                                    CANMessage message;
                                        message.id = 0x202;
                                            message.length = 1;
                                                message.data[0] = 0x64;  // Example brake status
                                                    sendCANMessage(&message);
                                                    }
                                                    