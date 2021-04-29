#pragma once

class Vector_2D
{
public:
	Vector_2D(){_x = 0; _y = 0;}
	Vector_2D(float x, float y);
	Vector_2D(float angle);

	float x();
	float y();

	void operator=(Vector_2D rhs);
	void operator+=(Vector_2D rhs);

	Vector_2D operator-(Vector_2D rhs);
	Vector_2D operator+(Vector_2D rhs);

	float magnitude();
	void normalize();
	void scale(float scalar);
	float angle();

	void rotate(float angle);

private:
	float _x;
	float _y;
};