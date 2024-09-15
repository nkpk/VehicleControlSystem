#include "CANBus.h"
#include "EngineControl.h"
#include "BrakeControl.h"
#include "InfotainmentControl.h"
#include <assert.h>

// Test sending and receiving CAN messages
void testCANBus() {
    CANMessage message;
        message.id = 0x101;
            message.length = 2;
                message.data[0] = 0x50;  // Simulated RPM value
                    
                        sendCANMessage(&message);
                            
                                CANMessage receivedMessage = receiveCANMessage();
                                    assert(receivedMessage.id == 0x200);
                                    }

                                    // Test engine control processing
                                    void testEngineControl() {
                                        CANMessage message;
                                            message.id = 0x101;
                                                message.length = 1;
                                                    message.data[0] = 80;  // Set RPM to 80

                                                        processEngineControl(&message);  // Expect engine RPM to adjust
                                                        }

                                                        // Test brake control processing
                                                        void testBrakeControl() {
                                                            CANMessage message;
                                                                message.id = 0x102;
                                                                    message.length = 1;
                                                                        message.data[0] = 60;  // Set brake pressure to 60
                                                                            
                                                                                processBrakeControl(&message);  // Expect brake pressure to be applied
                                                                                }

                                                                                // Test infotainment control processing
                                                                                void testInfotainmentControl() {
                                                                                    CANMessage message;
                                                                                        message.id = 0x103;
                                                                                            message.length = 1;
                                                                                                message.data[0] = 1;  // Example infotainment command

                                                                                                    processInfotainmentControl(&message);  // Expect infotainment command to be processed
                                                                                                    }

                                                                                                    int main() {
                                                                                                        testCANBus();
                                                                                                            testEngineControl();
                                                                                                                testBrakeControl();
                                                                                                                    testInfotainmentControl();
                                                                                                                        
                                                                                                                            return 0;
                                                                                                                            }
                                                                                                                            