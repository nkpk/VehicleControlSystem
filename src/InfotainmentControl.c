#include "InfotainmentControl.h"
#include <stdio.h>

// Process infotainment control CAN messages
void processInfotainmentControl(const CANMessage* message) {
    if (message->id == 0x103) {
            // Example: Adjust volume or change track based on received message
                    uint8_t command = message->data[0];
                            printf("Infotainment Command Received: %d\n", command);
                                }
                                }

                                // Send infotainment system status over CAN bus
                                void sendInfotainmentStatus() {
                                    CANMessage message;
                                        message.id = 0x203;
                                            message.length = 2;
                                                message.data[0] = 0x01;  // Example status: Infotainment on/off
                                                    message.data[1] = 0x50;  // Example status: Volume level
                                                        sendCANMessage(&message);
                                                        }
                                                        