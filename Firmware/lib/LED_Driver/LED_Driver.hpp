
#include <Arduino.h>

#pragma once

enum LED_TYPE{
    GENERIC = 0,
    WS2815 = 1,
    WS2812 = 2,
    SK6812 = 3
};

class LD_Chain{

    public:

    LD_Chain(uint16_t, LED_TYPE, pin_size_t);
    ~LD_Chain();

    void set_pixel(uint8_t, uint8_t, uint8_t);
    void set_pixel(uint32_t);

    uint16_t length;

    private:

    void update_buffer(uint32_t*);

    uint32_t* buffer_ptr = nullptr;

    uint32_t* buffer0 = nullptr;
    uint32_t* buffer1 = nullptr;

};
