//[[ C++ wrapper ]]

//For the RP2350 evpcd thing, make 2 kinds of storage
//SD and Flash with a diff arguments for each
//Kinda like C: and D:

//in the mean time where there's only access to flash
//if i want to send files to the system i need to make a windows/linux interface shell
//that communicates with it via serial

#pragma once
#include <evpcd.h>
#include <stdint.h>
class Evpcd {
public:

    int init(uint8_t *MemPtr, uint32_t MemSize, uint8_t safe) {
        return evpcd_init(MemPtr, MemSize, safe);
    }
    int step() {
        return evpcd_step();
    }
    int start(){
        return evpcd_start();
    }
    int end(){
        return evpcd_end();
    }
};


inline Evpcd evpcd;
