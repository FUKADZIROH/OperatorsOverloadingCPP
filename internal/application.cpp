#include "../domain/providers/operators_overloaded.h"

int main()
{
	try
	{
		Point point1;
		Point point2;
		Point point;
		cin >> point1;
		cin >> point2;
		point1.print();
		point2.print();
		cout << endl;
		point = point1(point1,point2);
		point.print();
		Point* point3 = new Point(32, 64);
		point3->print();
		delete point3;

	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
	return 0;
}
