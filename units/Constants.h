#pragma once

#include "SIUnits.h"

namespace units
{
    constexpr Unit<-1, 3, -2> GRAVITATIONAL_CONSTANT = 6.67430e-11 * METER.cubed() / KILOGRAM / SECOND.squared();
    constexpr Speed SPEED_OF_LIGHT = 299792458 * METER / SECOND;
    constexpr Unit<1, 2, -1> PLANK_CONSTANT = 6.62607015e-34 * KILOGRAM * METER.squared() / SECOND;
    constexpr Unit<1, 2, -1> REDUCED_PLANK_CONSTANT = 1.054571817e-34 * KILOGRAM * METER.squared() / SECOND;
    constexpr Mass ELECTRON_MASS = 9.1093837139e-31 * KILOGRAM;
    constexpr Unitless AVOGADRO_CONSTANT = 6.02214076e23;
}