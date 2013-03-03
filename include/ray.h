#ifndef RAY_H
#define RAY_H
#include "vector3.h"

namespace HurRay {
	class Ray {
		private:
			Vector3 origin;
			Vector3 fDirection;
		public:
		Ray(): origin(Vector3()), fDirection(Vector3()) {}
		Ray(Vector3 o, Vector3 dir): origin(o), fDirection(dir) {}
	};
}

#endif // RAY_H
