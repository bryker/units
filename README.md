# Overview

Units is a header only library built to reduce or remove unit conversion errors without impacting runtime performance.  The Unit class checks for unit compatibility (Speed values are being assigned to Speed variables) at runtime and provides simple readable ways to create, convert, and pass values of any type of unit.  

## Using Unit.h

Except in rare circumstances, you should not need to use the Unit class directly.  To maximize readibility, please use the supplied aliases (see Types.h) for types and the supplied constants (see SIUnits.h and USUnits.h) or your own constants for any values needed.  

## Limitations
To keep the implementation simple, the units for temperature (Kelvin), electrical current (Ampere), and luminous intensity (Candela) were excluded from this implementation.

Similarly the mole was excluded as a base unit and instead implemented as a constant (AVOGADRO_CONSTANT).

Unit can only distinguish between units with different breakdowns into the SI base units.  As such some conversions (eg torque and energy are both  $kg*m^2/s^2$) will not be caught at compile time.  

