#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
	int f = 0;
	double pi;
	double eps = 0.00001;
	double x = 1;
	double y = 1;
	double sum = 0;
	while(fabs(x) > eps)
	{
		x = 1 / y;
		if(f == 0)
		{
			f = 1;
			sum += x;
		}
		else
		{
			f = 0;
			sum -= x;
		}
		y += 2;
	}
	pi = 4 * sum;
	cout << pi << endl;
	
	return 0;
}
