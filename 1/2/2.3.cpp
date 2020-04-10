#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	double a, b, c, d;
	cout << "¬ведите 4 числа" << endl;
	cin >> a >> b >> c >> d;
	
	/*a = a < 0 ? 0 : a;
	b = b < 0 ? 0 : b;
	c = c < 0 ? 0 : c;
	d = d < 0 ? 0 : d;*/
	
	if(a < 0)
	{
		a = 0;
	}
	if(b < 0)
	{
		b = 0;
	}
	if(c < 0)
	{
		c = 0;
	}
	if(d < 0)
	{
		d = 0;
	}
	
	cout << a << " " << b << " " << c << " " << d << endl;
	return 0;
}
