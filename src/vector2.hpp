#pragma once

#include "basic_types.hpp"

namespace Physics {
	class Vector2 {
	public:
		f64 x;
		f64 y;

		Vector2();
		Vector2(f64 x, f64 y);

		Vector2 operator+(const Vector2& other);
		Vector2 operator-(const Vector2& other);
		Vector2 operator*(f64 other);
		Vector2 operator/(f64 other);
		Vector2& operator+=(const Vector2& other);
		Vector2& operator-=(const Vector2& other);
		Vector2& operator*=(f64 other);
		Vector2& operator/=(f64 other);

		f64 Component(Vector2& other);
		f64 Dot(Vector2& other);
		f64 Length();
		void Normalize();
	};
}
