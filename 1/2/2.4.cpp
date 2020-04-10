#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	double a, b, c, d, e, f, g, h, plus = 0, minus = 0;
	
	cout << "Введите 8 чисел" << endl;
	cin >> a >> b >> c >> d >> e >> f >> g >> h;
	
	a >= 0 ? plus++ : minus++;
	b >= 0 ? plus++ : minus++;
	c >= 0 ? plus++ : minus++;
	d >= 0 ? plus++ : minus++;
	e >= 0 ? plus++ : minus++;
	f >= 0 ? plus++ : minus++;
	g >= 0 ? plus++ : minus++;
	h >= 0 ? plus++ : minus++;
	
	/*if(a > 0)
	{
		plus++;
	}
	else
	{
		minus++;
	}
	if(b > 0)
	{
		plus++;
	}
	else
	{
		minus++;
	}
	if(c > 0)
	{
		plus++;
	}
	else
	{
		minus++;
	}
	if(d > 0)
	{
		plus++;
	}
	else
	{
		minus++;
	}
	if(e > 0)
	{
		plus++;
	}
	else
	{
		minus++;
	}	
	if(f > 0)
	{
		plus++;
	}
	else
	{
		minus++;
	}	
	if(g > 0)
	{
		plus++;
	}
	else
	{
		minus++;
	}
	if(h > 0)
	{
		plus++;
	}
	else
	{
		minus++;
	}*/
	
	cout << "Количество положительных чисел - " << plus << endl;
	cout << "Количество отрицательных чисел - " << minus << endl;
	
	return 0;
}
