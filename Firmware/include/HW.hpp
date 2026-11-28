
#include <Arduino.h>

#pragma once

namespace HW{

    namespace I2C{

        constexpr pin_size_t SDA = 0, SCL = 1;
        constexpr uint32_t FREQ = 100'000;

    }

    namespace SPI{

        constexpr pin_size_t MISO = 16, MOSI = 19, SCK = 18;

    }

    namespace SD{

        constexpr pin_size_t CS = 17;

    }

    namespace LEDS{

        constexpr pin_size_t IND = 22, BUTTON = 3;

        constexpr pin_size_t MATRIX[4] = {4, 5, 6, 7};

    }

    namespace EFUSE{

        constexpr pin_size_t MAX_3A = 20, MAX_5A = 21;

        constexpr pin_size_t IMON = 26;

    }

    namespace ANALOG{

        constexpr pin_size_t NTC = 27, PD_VOLTAGE = 28;

    }

    namespace TCA9555{

        constexpr uint8_t ADDR = 0x20;

        constexpr pin_size_t INT = 2;

        // ------------ INPUTS -------------

        constexpr pin_size_t BUTTON[3] = {5, 6, 7};
        constexpr pin_size_t EFUSE_PG = 0, SC7A20_INT2 = 16;

        // ------------ OUTPUTS ------------

        constexpr pin_size_t LED_POWER_SW = 4, BUZZER = 17;

        // -------------- IO ---------------

        constexpr pin_size_t IO[6] = {10, 11, 12, 13, 14, 15};

    }

    namespace SC7A20{

        constexpr uint8_t ADDR = 0x00; //update later
        
    }

    namespace CH224Q{

        constexpr uint8_t ADDR = 0x23; //check if correct

    }

}