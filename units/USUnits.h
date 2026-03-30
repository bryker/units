#include "Unit.h"
#include "SIUnits.h"

namespace units
{
    constexpr Distance INCH = .0254 * METER;
    constexpr Distance FOOT = 12 * INCH;
    constexpr Distance YARD = 3 * FOOT;
    constexpr Distance MILE = 5280 * FOOT;

    constexpr Area ACRE = 4840 * YARD.squared();

    constexpr Volume US_GALLON = 231 * INCH * INCH * INCH;
    constexpr Volume IMPERIAL_GALLON = 4.54609 * LITER;
    constexpr Volume US_QUART = US_GALLON / 4;
    constexpr Volume US_CUP = US_QUART / 4;
    constexpr Volume FLUID_OUNCE = US_CUP / 8;

    constexpr Mass POUND = .45359237 * KILOGRAM;
    constexpr Mass OUNCE = POUND / 16;

    constexpr Force POUND_FORCE = POUND * GRAVITY;
}