#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
	double xn = -4.5;
	double temp;
	double a[59];
	for(int i = 0; i < 59; i++)
	{
		a[i] = 2.14 * pow(xn, 2) * sin(xn) - 4.21 * xn + 3.25;
		xn -= 0.5;
	}
	for(int i = 0; i < 58; i++)
	{
		for(int j = i + 1; j < 59; j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;	
			}	
		}
	}
	for(int i = 0; i < 59; i++)
	{
		cout << a[i] << endl;
	}
}
