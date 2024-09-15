#ifndef CAN_BUS_H
#define CAN_BUS_H

#include <stdint.h>

#define MAX_CAN_DATA_LENGTH 8

typedef struct {
    uint32_t id;                     // CAN message ID
        uint8_t data[MAX_CAN_DATA_LENGTH];  // CAN message data
            uint8_t length;                  // Data length
            } CANMessage;

            // Function prototypes
            void sendCANMessage(const CANMessage* message);
            CANMessage receiveCANMessage();

            #endif // CAN_BUS_H
            