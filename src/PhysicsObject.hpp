#pragma once

#include "Vector2.hpp"

namespace Physics {
	class PhysicsObject {
	public:
		Vector2 center;
		Vector2 velocity;
		Vector2 acceleration;
		f64 mass;
	};
}
