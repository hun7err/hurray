#include "../include/vector3.h"
#include <cmath>

namespace HurRay {
	void Vector3::setX(float _x) { x = _x; }
	void Vector3::setY(float _y) { y = _y; }
	void Vector3::setZ(float _z) { z = _z; }
	void Vector3::setPos(float _x, float _y, float _z) {
		x = _x; y = _y; z = _z;
	}
	//
	float Vector3::getX() { return x; }
	float Vector3::getY() { return y; }
	float Vector3::getZ() { return z; }
	// operacje na vector3
	float Vector3::len() {
		return sqrt(x*x + y*y + z*z);
	}
	void Vector3::normalize() {
		float l = sqrt(x*x + y*y + z*z);
		x /= l;
		y /= l;
		z /= l;
	}
	void Vector3::moveToSpace(Vector3 nx, Vector3 ny, Vector3 nz) {
		x = x*nx.x + y*ny.x + z*nz.x;
		y = x*nx.y + y*ny.y + z*nz.y;
		z = x*nx.z + y*ny.z + z*nz.z;
	}
	// operators
	Vector3 operator+ (const Vector3& u, const Vector3& v) {
		return Vector3(u.x+v.x, u.y+v.y, u.z+v.z);
	}
	Vector3 operator- (const Vector3& u, const Vector3& v) {
		return Vector3(u.x-v.x, u.y-v.y, u.z-v.z);
	}
	Vector3 operator* (const Vector3& u, float n) {
		return Vector3(n*u.x, n*u.y, n*u.z);
	}
	Vector3 operator/ (const Vector3& u, float n) {
		Vector3 ret(u.x/n, u.y/n, u.z/n);
		return ret;
	}
}
