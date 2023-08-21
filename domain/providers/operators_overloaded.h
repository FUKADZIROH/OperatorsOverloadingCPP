#include "../models/Point.h"

Point operator +(const Point& point1,const Point& point2)
{
	return Point(point1.x + point2.x, point1.y + point2.y);
}
Point operator -(const Point& point1, const Point& point2)
{
	return Point(point1.x - point2.x, point1.y - point2.y);
}
Point operator *(const Point& point1, const Point& point2)
{
	return Point(point1.x * point2.x, point1.y * point2.y);
} 
Point operator /(const Point& point1, const Point& point2)
{
	if (point1.x == 0 || point2.x == 0)
	{
		throw "Division by zero";
	}
	return Point(point1.x / point2.x, point1.y / point2.y);
}

Point& Point::operator++()
{
	++x; ++y; return *this;
}
Point& Point::operator--()
{
	--x; --y; return *this;
}

const Point Point::operator++(int)
{
	Point point{ x, y }; 
	++(*this); 
	return point; 
}
const Point Point::operator--(int)
{
	Point point{ x, y };
	--(*this);
	return point;
}

bool operator==(const Point& point1, const Point& point2){
   return point1.x == point2.x && point1.y == point2.y;
}
bool operator!=(const Point& point1, const Point& point2){
	return !(point1 == point2);
}
bool operator>(const Point& point1, const Point& point2){
	return point1.x > point2.x && point1.y > point2.y;
}
bool operator<(const Point& point1, const Point& point2){
	return point1.x < point2.x && point1.y < point2.y;
}
bool operator>=(const Point& point1, const Point& point2){
	return point1.x >= point2.x && point1.y >= point2.y;
}
bool operator<=(const Point& point1, const Point& point2){
	return point1.x <= point2.x && point1.y <= point2.y;
}
ostream& operator<< (ostream& output, const Point& point) {
	output << "[" << point.x << " : " << point.y << "]";
	return output;
}
istream& operator>> (istream& input, Point &point){
	cout << "Enter x: "; input >> point.x;
	cout << "Enter y: "; input >> point.y;
	return input;
}

bool operator&& (const Point& point1,const Point point2) {
	return point1 && point2;
}
bool operator|| (const Point& point1, const Point point2) {
	return point1 || point2;
}
bool operator! (const Point& point) {
	return !point;
}
