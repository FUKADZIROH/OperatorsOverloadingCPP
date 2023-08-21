#include "../../internal/application.h"

class Point
{
private:
		int x;
		int y;
public:
	Point() = default;
	Point(int x, int y): x(x), y(y) {}
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
	void setX(int x)
	{
		this->x = x;
	}
	void setY(int y)
	{
		this->y = y;
	}
	void print()
	{
		cout << "[x: " << x << ", y: " << y << "]" << endl;
	}
	~Point() = default;

	friend Point operator+(const Point& point1, const Point& point2);
	friend Point operator-(const Point& point1, const Point& point2);
	friend Point operator*(const Point& point1, const Point& point2);
	friend Point operator/(const Point& point1, const Point& point2);

	friend bool operator==(const Point& point1, const Point& point2);
	friend bool operator!=(const Point& point1, const Point& point2);
    friend bool operator>(const Point& point1, const Point& point2);
	friend bool operator<(const Point& point1, const Point& point2);
	friend bool operator>=(const Point& point1, const Point& point2);
	friend bool operator<=(const Point& point1, const Point& point2);

	Point& operator++();
	Point& operator--();
	const Point operator++(int);
	const Point operator--(int);

	friend ostream& operator<< (ostream& output, const Point& point);
	friend istream& operator>> (istream& input, Point &point);

	friend bool operator&& (const Point& point1, const Point point2);
	friend bool operator|| (const Point& point1, const Point point2);
	friend bool operator! (const Point& point);

	void operator= (Point point) {
		x = point.x;
		y = point.y;
	}
	void operator+= (Point point) {
		x += point.x;
		y += point.y;
	}
	void operator-= (Point point) {
		x -= point.x;
		y -= point.y;
	}
	void operator*= (Point point) {
		x *= point.x;
		y *= point.y;
	}
	void operator/= (Point point) {
		if (point.x == 0 || point.y == 0)
		{
			throw "Division by zero";
		}
		x /= point.x;
		y /= point.y;
	}
	void operator%= (Point point) {
		x %= point.x;
		y %= point.y;
	}
	Point operator()(Point point1,Point point2) {
		Point point;
		point.x = point1.x * 10;
		point.y = point2.y / 2;
		return point;
	}
	void* operator new(size_t size)
	{
		void* p = ::operator new(size);

		return p;
	}
	void operator delete(void* p)
	{
		free(p);
	}
};
