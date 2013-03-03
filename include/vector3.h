#ifndef VECTOR3_H
#define VECTOR3_H

namespace HurRay {
	class Vector3 {
		protected:
			union {
				struct { float x, y, z; };
				struct { float r, g, b; };
			};
		public:
			// setters
			void setX(float _x);
			void setY(float _y);
			void setZ(float _z);
			void setPos(float _x, float _y, float _z);
			// getters
			float getX();
			float getY();
			float getZ();
			// functions
			float len();
			void normalize();
			// dotProd, crossProd
			void moveToSpace(Vector3 nx, Vector3 ny, Vector3 nz);
		// vector operations
		friend Vector3 operator+ (const Vector3& u, const Vector3& v);
		friend Vector3 operator- (const Vector3& u, const Vector3& v);
		friend Vector3 operator* (const Vector3& u, const float n);
		friend Vector3 operator/ (const Vector3& u, const float n);
		// to-do: += , -=, *=, /=
		// constructors
		Vector3() : x(0.0f), y(0.0f), z(0.0f) {}
		Vector3(float _x, float _y, float _z):
			x(_x), y(_y), z(_z) {}
	};

	typedef Vector3 Color;
}

#endif // VECTOR3_H
