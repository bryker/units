#include "units/SIUnits.h"
#include "units/USUnits.h"
#include "units/Constants.h"
#include <iostream>

using namespace units;

int main()
{
    std::cout << "A light nanosecond is: " << (SPEED_OF_LIGHT * NANO * SECOND).as(INCH) << " inches" << std::endl;

    Mass moon_mass = 7.34767309e22 * KILOGRAM;
    Distance moon_radius = 1737.4 * KILO * METER;
    Acceleration moon_gravity = GRAVITATIONAL_CONSTANT * moon_mass / moon_radius.squared();

    std::cout << "The acceleration due to gravity on the moon is approximately: " << moon_gravity << std::endl;
    std::cout << "\tOr in ft/s^2: " << moon_gravity.as(FOOT / SECOND / SECOND) << std::endl;

    Distance d;
    Speed s = 1 * FOOT / SECOND;
    for (int i = 0; i < 10; i++)
    {
        d += s * SECOND;
    }
    std::cout << "Total distance traveled is: " << d.as(METER) << " meters" << std::endl;
}
