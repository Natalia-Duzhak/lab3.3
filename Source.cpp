#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
		double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	// розгалуження в повній формі
	if (x <= - R)
		y = R;
	else
		if (- R < x && x <= 0)
			y = R + sqrt(R * R - x * x);
		else
				if (R < x && x <= 6)
					y =R+ (-3-R)/(6-R)* (x-R) ;
				else
					y = -3*(x-6);
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}
