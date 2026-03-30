#pragma once

#include <type_traits>
#include <sstream>
#include <string>
#include <cmath>

namespace units
{
    template <int kilogram, int meter, int second>
    class Unit
    {
        template <int, int, int>
        friend class Unit;
        friend class UnitHelper;

    public:
        /********* Constructors *********/

        constexpr Unit() = default;

        constexpr Unit(const float value)
            requires(kilogram == 0 && meter == 0 && second == 0)
            : value(value)
        {
        }

        constexpr Unit(const Unit<kilogram, meter, second> &other) : value(other.value) {}
        constexpr Unit(const Unit<kilogram, meter, second> &&other) : value(other.value) {}
        constexpr Unit<kilogram, meter, second> operator=(const Unit<kilogram, meter, second> &other)
        {
            value = other.value;
        }
        constexpr Unit<kilogram, meter, second> operator=(const Unit<kilogram, meter, second> &&other)
        {
            value = other.value;
        }

        /********* Data Retrieval *********/
        constexpr float as(const Unit<kilogram, meter, second> other) const
        {
            return value / other.value;
        }


        friend std::ostream &operator<<(std::ostream &stream, const Unit<kilogram, meter, second> &unit)
        {
            return stream << unit.toString();
        }

        constexpr std::string toString() const
        {
            std::ostringstream ss;
            ss << this->value;
            if (kilogram != 0)
            {
                ss << " kg^" << kilogram;
            }
            if (meter != 0)
            {
                ss << " m^" << meter;
            }
            if (second != 0)
            {
                ss << " s^" << second;
            }
            return ss.str();
        }

        /********* Arithmetic Operators *********/
        constexpr auto operator+(const Unit<kilogram, meter, second> other) const
        {
            return Unit<kilogram, meter, second>(this->value + other.value);
        }

        auto operator+=(const Unit<kilogram, meter, second> other)
        {
            this->value += other.value;
        }

        constexpr auto operator-(const Unit<kilogram, meter, second> other) const
        {
            return Unit<kilogram, meter, second>(this->value - other.value);
        }

        auto operator-=(const Unit<kilogram, meter, second> other)
        {
            this->value -= other.value;
        }

        template <int other_kilogram, int other_meter, int other_second>
        constexpr auto operator*(const Unit<other_kilogram, other_meter, other_second> other) const
        {
            return Unit<kilogram + other_kilogram, meter + other_meter, second + other_second>(this->value * other.value);
        }

        template <typename T, typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
        constexpr auto operator*(const T other) const
        {
            return Unit<kilogram, meter, second>(this->value * other);
        }

        template <typename T, typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
        constexpr friend auto operator*(T other, const Unit<kilogram, meter, second> &unit)
        {
            return unit * other;
        }

        auto operator*=(const Unit<0, 0, 0> other)
        {
            this->value *= other.value;
        }

        template <int other_kilogram, int other_meter, int other_second>
        constexpr auto operator/(const Unit<other_kilogram, other_meter, other_second> other) const
        {
            return Unit<kilogram - other_kilogram, meter - other_meter, second - other_second>(this->value / other.value);
        }

        template <typename T, typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
        constexpr auto operator/(const T other) const
        {
            return Unit<kilogram, meter, second>(this->value / other);
        }

        template <typename T, typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
        constexpr friend auto operator/(T other, const Unit<kilogram, meter, second> &unit)
        {
            return Unit<-kilogram, -meter, -second>(other / unit.value);
        }

        auto operator/=(const Unit<0, 0, 0> other)
        {
            this->value /= other.value;
        }

        template<int n>
        constexpr auto pow() const
        {
            return Unit<n * kilogram, n * meter, n * second>(std::pow(value, n));
        }

        constexpr auto squared() const
        {
            return this->pow<2>();
        }

        constexpr auto cubed() const
        {
            return this->pow<3>();
        }

    private:
        constexpr Unit(const float value) : value(value)
        {
        }
        float value = 0;
    };

    class UnitHelper
    {
    public:
        /********* Base units *********/
        static constexpr Unit<1, 0, 0> KILOGRAM{1};
        static constexpr Unit<0, 1, 0> METER{1};
        static constexpr Unit<0, 0, 1> SECOND{1};
    };
}