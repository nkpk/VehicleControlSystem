#include "CANBus.h"
#include <stdio.h>

// Simulate sending a CAN message
void sendCANMessage(const CANMessage* message) {
    printf("Sending CAN Message: ID=%X, Data=", message->id);
        for (int i = 0; i < message->length; i++) {
                printf("%02X ", message->data[i]);
                    }
                        printf("\n");
                        }

                        // Simulate receiving a CAN message
                        CANMessage receiveCANMessage() {
                            CANMessage message;
                                message.id = 0x200;  // Example CAN ID
                                    message.length = 3;  // Example length
                                        message.data[0] = 0xAA;
                                            message.data[1] = 0xBB;
                                                message.data[2] = 0xCC;
                                                    return message;
                                                    }
                                                    