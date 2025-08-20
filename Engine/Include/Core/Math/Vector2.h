/**
 * Mystic Game Engine (MGE)
 *
 * @path [ROOT]/Engine/Include/Core/Math/vec2.h
 *
 * @file vec2.h
 *
 * @brief Header file for FVec2 class.
 */
#pragma once

#include "standard_types.h"
#include "sqrt.h"

namespace MGE::Core::Math {

template <typename Type>
struct FVec2 {
    Type x, y;
    
    FVec2() : x(Type()), y(Type()) {}
    FVec2(const Type& p_x, const Type& p_y) : x(p_x), y(p_y) {}

    inline FVec2 operator-() {
        return FVec2{-(x), -(y)}; 
    }
    
    inline FVec2 operator+(const FVec2& other) {
        return FVec2{(x + other.x), (y + other.y)}; 
    }

    inline FVec2 operator-(const FVec2& other) {
        return FVec2{(x - other.x), (y + other.y)}; 
    }

    inline FVec2 operator*(const FVec2& other) {
        return FVec2{(x * other.x), (y * other.y)}; 
    }

    inline FVec2 operator/(const FVec2& other) { 
        if (other.x == 0 || other.y == 0) { 
            return FVec2{(Type()), (Type())};
        } else {
            return FVec2{(x / other.x), (y / other.y)};
        }
    }

    inline FVec2& operator+=(const FVec2& other) {
        return FVec2{(x + other.x), (y + other.y)};
    }

    inline FVec2& operator-=(const FVec2& other) {
        return FVec2{(x - other.x), (y + other.y)}; 
    }

    inline FVec2& operator*=(const FVec2& other) {
        return FVec2{(x * other.x), (y * other.y)}; 
    }

    inline FVec2& operator/=(const FVec2& other) {
        if (other.x == 0 || other.y == 0) { 
            return FVec2{(Type()), (Type())};
        } else {
            return FVec2{(x / other.x), (y / other.y)};
        }
    }

    inline FVec2 operator+(const Type scaler) {
        return FVec2{(x + scaler), (y + scaler)};
    }

    inline FVec2 operator-(const Type scaler) {
        return FVec2{(x - scaler), (y - scaler)};
    }

    inline FVec2 operator*(const Type scaler) {
        return FVec2{(x * scaler), (y * scaler)};
    }

    inline FVec2 operator/(const Type scaler) {
        if (scaler == 0) { 
            return FVec2{(Type()), (Type())};
        } else {
            return FVec2{(x / scaler), (y / scaler)};
        }
    }

    inline FVec2& operator+=(const Type scaler) {
        return FVec2{(x + scaler), (y + scaler)};
    }

    inline FVec2& operator-=(const Type scaler) {
        return FVec2{(x - scaler), (y - scaler)};
    }

    inline FVec2& operator*=(const Type scaler) {
        return FVec2{(x * scaler), (y * scaler)};
    }

    inline FVec2& operator/=(const Type scaler) {
        if (scaler == 0) { 
            return FVec2{(Type()), (Type())};
        } else {
            return FVec2{(x / scaler), (y / scaler)};
        }
    }

    friend FVec2 operator+(const Type scaler, const FVec2<Type>& vec) {
        return FVec2{(scaler + vec.x), (scaler + vec.y)};
    }

    friend FVec2 operator-(const Type scaler, const FVec2<Type>& vec) {
        return FVec2{(scaler - vec.x), (scaler - vec.y)};
    }

    friend FVec2 operator*(const Type scaler, const FVec2<Type>& vec) {
        return FVec2{(scaler * vec.x), (scaler * vec.y)};
    }

    friend FVec2 operator/(const Type scaler, const FVec2<Type>& vec) {
        if (vec.x == 0 || vec.y == 0) { 
            return FVec2{(Type()), (Type())};
        } else {
            return FVec2{(scaler / vec.x), (scaler / vec.y)};
        }
    }

    inline b8 operator<(const FVec2& other) {
        return sqrt(x * x + y * y) < sqrt(other.x * other.x + other.y * other.y);
    }

    inline b8 operator>(const FVec2& other) {
        return !(*this < other);
    }

    inline b8 operator==(const FVec2& other) {
        return (x == other.x) && (y == other.y)
    }

    inline b8 operator!=(const FVec2& other) {
        return !(*this == other);
    }

    inline b8 operator<=(const FVec2& other) {
        return (*this < other) || (*this == other);
    }

    inline b8 operator>=(const FVec2& other) {
        return !(*this <= other);
    }
    
    inline Trait::EnableIf_t<Trait::IsIntegral<Type>, FVec2> operator|(const FVec2& other) {
        return FVec2{(x | other.x), (y | other.y)};
    }

    inline Trait::EnableIf_t<Trait::IsIntegral<Type>, FVec2> operator&(const FVec2& other) {
        return FVec2{(x & other.x), (y & other.y)};
    }

    inline Trait::EnableIf_t<Trait::IsIntegral<Type>, FVec2> operator^(const FVec2& other) {
        return FVec2{(x ^ other.x), (y ^ other.y)};
    }

    inline Trait::EnableIf_t<Trait::IsIntegral<Type>, FVec2> operator<<(const i32 shift) {
    inline Trait::EnableIf_t<Trait::IsIntegral<Type>, FVec2> operator>>(const i32 shift);
    inline Trait::EnableIf_t<Trait::IsIntegral<Type>, FVec2> operator<<(const u32 shift);
    inline Trait::EnableIf_t<Trait::IsIntegral<Type>, FVec2> operator>>(const u32 shift);

    inline Trait::EnableIf_t<Trait::IsIntegral<Type>, FVec2> operator~();

    inline Trait::EnableIf_t<Trait::IsIntegral<Type>, FVec2&> operator|=(const FVec2& other);
    inline Trait::EnableIf_t<Trait::IsIntegral<Type>, FVec2&> operator&=(const FVec2& other);
    inline Trait::EnableIf_t<Trait::IsIntegral<Type>, FVec2&> operator^=(const FVec2& other);

    inline Trait::EnableIf_t<Trait::IsIntegral<Type>, FVec2&> operator<<=(const i32 shift);
    inline Trait::EnableIf_t<Trait::IsIntegral<Type>, FVec2&> operator>>=(const i32 shift);
    inline Trait::EnableIf_t<Trait::IsIntegral<Type>, FVec2&> operator<<=(const u32 shift);
    inline Trait::EnableIf_t<Trait::IsIntegral<Type>, FVec2&> operator>>=(const u32 shift);
};

} // namespace MGE::Core::Math
