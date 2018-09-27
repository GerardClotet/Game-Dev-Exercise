#ifndef _VEC3_
#define _VEC3_
#include <math.h>
template <class Type>
class vec3
{
private:
	Type x, y, z;
	
public:

	vec3(){}

	vec3(const Type &x, const Type &y, const Type &z): x(x), y(y), z(z) {}

	vec3(const vec3 &vec) : x(vec.x), y(vec.y), z(vec.z) {}

	vec3 operator+(const vec3 &vect) const
	{
		return vec3(x + vect.x, y + vect.y, z + vect.z);
	}

	vec3 operator-(const vec3 &vect) const
	{
		return vec3(x - vect.x, y - vect.y, z - vect.z);
	}

	vec3 operator+=(const vec3 &vect)
	{
		x += vect.x; y += vect.y; z += vect.z;
		return *this;

	}

	vec3 operator-=(const vec3 &vect)
	{
		x -= vect.x; y -= vect.y; z -= vect.z;
		return *this;
	}

	vec3 operator=(const vec3 &vect)
	{
		x = vect.x; y = vect.y; z = vect.z;
		return *this;
	}

	bool operator==(const vec3 &vect) const
	{
		return (x == vect.x && y == vect.y && z == vect.z);
	}

	vec3 normalized() const
	{
		Type magnitude = sqrt((x * x) + (y * y) + (z * z));
		return vec3(x / magnitude, y / magnitude, z / magnitude);

	}

	vec3 normalize()
	{
		Type magnitude = sqrt((x * x) + (y * y) + (z * z));
		x = x / magnitude; y = y / magnitude; z = z / magnitude;
		return vec3 * this;

	}

	vec3 zero()
	{
		x = 0.0f;
		y = 0.0f;
		z = 0.0f;
		return *this;
	}

	bool is_zero() const
	{
		return (x == 0.0 && y == 0.0 && z == 0.0);

	}

	Type distance_to(const vec3 &vect) const
	{
		return sqrt(((x - vect.x) * (x - vect.x)) + ((y - vect.y) * (y - vect.y)) + ((z - vect.z) * (z - vect.z)));
	}

	Type distance_to_shot(const vec3 &vect)const
	{
		return ((x - vect.x) * (x - vect.x)) + ((y - vect.y) * (y - vect.y)) + ((z - vect.z) * (z - vect.z));
	}


};
#endif