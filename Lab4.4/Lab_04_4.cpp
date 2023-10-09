#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
	double x, R, y, xp, xk, dx;
	cout << "R = "; cin >> R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -8 - R)
			y = R;
		else
			if (-8 - R < x && x <= -8 + R)
				y = R - sqrt(pow(R, 2) - pow((x + 8), 2));
			else
				if (-8 + R < x && x <= -4)
					y = R;
				else
					if (-4 < x && x <= 2)
						y = R + (-x - 4 - R * x - 4 * R) / 6;
					else
						y = x - 2;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}