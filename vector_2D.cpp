#include "vector_2D.h"

#include <math.h>

float DegreesToRads(float degree)
{
    float pi = 3.14159265359f;
    return (degree * (pi / 180));
}

Vector_2D::Vector_2D(float x, float y)
{
	_x = x;
	_y = y;
}

Vector_2D::Vector_2D(float angle)
{
	_x = cosf(DegreesToRads(angle));
	_y = sinf(DegreesToRads(angle));
}

float Vector_2D::x()
{
	return _x;
}

float Vector_2D::y()
{
	return _y;
}

void Vector_2D::scale(float scalar)
{
	_x *= scalar;
	_y *= scalar;
}

void Vector_2D::operator=(Vector_2D rhs)
{
	_x = rhs._x;
	_y = rhs._y;
}

void Vector_2D::operator+=(Vector_2D rhs)
{
	_x += rhs._x;
	_y += rhs._y;
}

Vector_2D Vector_2D::operator-(Vector_2D rhs)
{
	return Vector_2D(_x - rhs._x, _y - rhs._y);
}

Vector_2D Vector_2D::operator+(Vector_2D rhs)
{
	return Vector_2D(_x + rhs._x, _y + rhs._y);
}

float Vector_2D::magnitude()
{
	return sqrtf(_x * _x + _y * _y);
}

void Vector_2D::normalize()
{
	float mag = magnitude();

	if(mag > 0.0f)
	{
		_x /= mag;
		_y /= mag;
	}
}

float Vector_2D::angle()
{
	return atan2f(_y, _x);
}

void Vector_2D::rotate(float angle)
{
	float angle_radians = DegreesToRads(angle);
	float initial_angle = this->angle();

	_x = cosf(angle_radians + initial_angle);
	_y = sinf(angle_radians + initial_angle);
}