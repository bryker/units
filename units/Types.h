#pragma once

#include "Unit.h"

namespace units
{
    using Unitless = Unit<0, 0, 0>;

    using Mass = Unit<1, 0, 0>;
    using Distance = Unit<0, 1, 0>;
    using Duration = Unit<0, 0, 1>;

    using Frequency = Unit<0, 0, -1>;

    using Speed = Unit<0, 1, -1>;
    using Acceleration = Unit<0, 1, -2>;
    using Jerk = Unit<0, 1, -3>;

    using Area = Unit<0, 2, 0>;
    using Volume = Unit<0, 3, 0>;

    using Density = Unit<1, -3, 0>;

    using Pressure = Unit<1, -1, -2>;
    using Force = Unit<1, 1, -2>;
    using Weight = Force;

    using Momentum = Unit<1, 1, -1>;
    using Energy = Unit<1, 2, -2>;
    using Power = Unit<1, 2, -3>;
}