#include "CANBus.h"
#include "EngineControl.h"
#include "BrakeControl.h"
#include "InfotainmentControl.h"

int main() {
    // Simulate receiving a CAN message
        CANMessage message = receiveCANMessage();
            
                // Process message based on CAN ID
                    switch (message.id) {
                            case 0x101:
                                        processEngineControl(&message);
                                                    break;
                                                            case 0x102:
                                                                        processBrakeControl(&message);
                                                                                    break;
                                                                                            case 0x103:
                                                                                                        processInfotainmentControl(&message);
                                                                                                                    break;
                                                                                                                            default:
                                                                                                                                        printf("Unknown CAN Message ID: %X\n", message.id);
                                                                                                                                            }

                                                                                                                                                // Send status updates for each subsystem
                                                                                                                                                    sendEngineStatus();
                                                                                                                                                        sendBrakeStatus();
                                                                                                                                                            sendInfotainmentStatus();

                                                                                                                                                                return 0;
                                                                                                                                                                }
                                                                                                                                                                