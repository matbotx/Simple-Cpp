#include <iostream>
#include <cmath>
#include "Point.hpp"

using namespace std;

int main()
{
	Point p1;
	double x, y;
	cout<<"give him dose cords:"<<endl;
	cin >> x >> y;

	Point p2(x, y);
	double dist = p1.distanceTo(p2);
	cout << dist;
return 0;
}
