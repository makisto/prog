#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	double a, b, c, d, k;
	
	cout << "Введите 4 числа" << endl;
	cin >> a >> b >> c >> d;
	
	k = a < b && a < c && a < d ? 1 : b < c && b < d ? 2 : c < d ? 3 : 4;
	
	/*if(a < b && a < c && a < d)
	{
		k = 1;
	}
	else if(b < c && b < d)
	{
		k = 2;
	}
	else if(c < d)
	{
		k = 3;
	}
	else
	{
		k = 4;
	}*/
	
	cout << "Порядковый номер наименьшего числа - " << k << endl;
	
	return 0;
}
