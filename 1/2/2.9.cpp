#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	double a, b, c, k, max, min;
	
	cout << "¬ведите 3 числа" << endl;
	cin >> a >> b >> c;
	
	max = a > b && a > c ? a : b > c ? b : c;
	min = a < b && a < c ? a : b < c ? b : c;
	
	if(max == a && min == b)
	{
		k = a;
		a = b;
		b = k;	
	}
	else if(max == a && min == c)
	{
		k = a;
		a = c;
		c = k;
	}
	else if(max == b && min == c)
	{
		k = b;
		b = c;
		c = k;
	}
	else if(max == b && min == a)
	{
		k = b;
		b = a;
		a = k;
	}
	else if(max == c && min == a)
	{
		k = c;
		c = a;
		a = k;		
	}
	else
	{
		k = c;
		c = b;
		b = k;
	}
	
	cout << "„исла - " << a << " " << b << " " << c << endl;	
	return 0;
}
