#include <iostream>
#include <math.h>

using namespace std; 

int main(int argc, char *argv[])
{
    double x1, x2, x3, x4, x5, x6;
	double y1, y2, y3, y4, y5, y6;
	double z1, z2, z3, z4, z5, z6;
	double t1, t2, t3, t4, t5, t6;

	y1 = 2;
	t1 = 5 / (1 + pow(y1, 2));
	z1 = 4;
	x1 = 2 * y1 + 3 * sinh(t1) - z1;
	cout << x1 << endl;
	
	t2 = 0.5;
	z2 = 6;
	y2 = t2 + 2 * (1 / tan(z2));
	x2 = 3 * pow(y2, 2) / (4 * tan(z2) - 2 * pow(t2, 2));
	cout << x2 << endl;
	
	t3 = 1;
	z3 = 3;
	y3 = sin(t3);
	x3 = 4 * pow(y3, 2) / (4 * y3 * exp(z3) - 2 * pow(t3, 3));
	cout << x3 << endl;
	
	t4 = 2;
	z4 = 3;
	y4 = cos(t4 + z4);
	x4 = 4 * log(pow(y4, 3)) - z4 / t4;
	cout << x4 << endl;
	
	z5 = 4;
	y5 = 2;
	t5 = sin(2 + z5);
	x5 = 6 * pow(t5, 2) - ((1 / tan(z5)) + 1) / pow(y5, 2);
	cout << x5 << endl;
	
	z6 = 1;
	t6 = 2;
	y6 = tan(t6) + z6;
	x6 = (8 * pow(z6, 2) + 1) / (y6 * exp(t6) + pow(t6, 2));
	cout << x6 << endl;
	
    return 0;
}
