#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	double a, b, c, d, max, min, k;
	
	cout << "Введите 4 числа" << endl;
	cin >> a >> b >> c >> d;
	
	max = a > b && a > c && a > d ? a : b > c && b > d ? b : c > d ? c : d;
	min = a < b && a < c && a < d ? a : b < c && b < d ? 2 : c < d ? c : d;
	
	/*if(a > b && a > c && a > d)
	{
		max = a;
	}
	else if(b > c && b > d)
	{
		max = b;
	}
	else if(c > d)
	{
		max = c;
	}
	else
	{
		max = d;
	}
	
	if(a < b && a < c && a < d)
	{
		min = a;
	}
	else if(b < c && b < d)
	{
		min = b;
	}
	else if(c < d)
	{
		min = c;
	}
	else
	{
		min = d;
	}*/
	
	k = max - min;
	
	cout << "Разница между максимальным и минимальным числом - " << k << endl;
	
	return 0;
}

