#pragma once

#include "Types.h"

namespace units
{
    constexpr Unitless QUETTA{1e30};
    constexpr Unitless RONNA{1e27};
    constexpr Unitless YOTTA{1e24};
    constexpr Unitless ZETTA{1e21};
    constexpr Unitless EXA{1e18};
    constexpr Unitless PETA{1e15};
    constexpr Unitless TERA{1e12};
    constexpr Unitless GIGA{1e9};
    constexpr Unitless MEGA{1e6};
    constexpr Unitless KILO{1e3};
    constexpr Unitless HECTO{1e2};
    constexpr Unitless DECA{1e1};
    constexpr Unitless DECI{1e-1};
    constexpr Unitless CENTI{1e-2};
    constexpr Unitless MILLI{1e-3};
    constexpr Unitless MICRO{1e-6};
    constexpr Unitless NANO{1e-9};
    constexpr Unitless PICO{1e-12};
    constexpr Unitless FEMTO{1e-15};
    constexpr Unitless ATTO{1e-18};
    constexpr Unitless ZEPTO{1e-21};
    constexpr Unitless YOCTO{1e-24};
    constexpr Unitless RONTO{1e-27};
    constexpr Unitless QUECTO{1e-30};

    constexpr Unitless UNITLESS{1};
    constexpr Mass KILOGRAM = UnitHelper::KILOGRAM;
    constexpr Distance METER = UnitHelper::METER;
    constexpr Duration SECOND = UnitHelper::SECOND;

    constexpr Frequency HERTZ = 1 / SECOND;
    constexpr Force NEWTON = KILOGRAM * METER / SECOND / SECOND;
    constexpr Pressure PASCAL = NEWTON / METER / METER;
    constexpr Energy JOULE = NEWTON * METER;
    constexpr Power WATT = JOULE / SECOND;
    constexpr Mass GRAM = MILLI * KILOGRAM;
    constexpr Volume LITER = (DECI * METER).cubed();

    constexpr Duration MINUTE = 60 * SECOND;
    constexpr Duration HOUR = 60 * MINUTE;
    constexpr Duration DAY = 24 * HOUR;
    constexpr Duration YEAR = 365 * DAY;
    constexpr Duration SOLAR_YEAR = 365.2422 * DAY;

    constexpr Acceleration GRAVITY = 9.80665 * METER / SECOND / SECOND;
    constexpr Pressure ATMOSPHERE = 101325 * PASCAL;
    constexpr Pressure MM_MERCURY = 133.322387415 * PASCAL;
}