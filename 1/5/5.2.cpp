#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
	double y, min = 0, max = 0; 
	double h = 0.5;
	double xn = -4.5;
	double xk = -13.5;
	while(xn >= xk)
	{
		y = (2.14 * pow(xn, 2) - 4.21 * xn + 3.25) * sin(xn);
		if(y < min)
		{
			min = y;
		}
		if(y > max)
		{
			max = y;
		}
		xn -= h;
	}
	cout << min << " " << max << endl;
	
	return 0;
}
