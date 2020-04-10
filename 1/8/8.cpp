#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
	double a, b, a1, b1, sum, sum1, sum2, h;
	int n = 10;
	cout << "Введите a - " << endl;
	cin >> a;
	cout << "Введите b - " << endl;
	cin >> b;
	while(n <= 1000)
	{
		cout << "N = " << n << endl;
		double arr[n + 1];
		a1 = a;
		b1 = b;
		h = (b1 - a1) / n;
		sum = 0;
		sum1 = 0;
		sum2 = 0;
		for(int i = 0; i <= n; i++)
		{
			arr[i] = pow(a1, 2) / (10 + pow(a1, 3));
			a1 += h;
		}
		for(int i = 1; i < n; i++)
		{
			sum += arr[i];
		}
		cout << "Формула трапеции - " << h * (arr[0] / 2.0 + sum + arr[n] / 2.0) << endl;
		for(int i = 1; i < n; i += 2)
		{
			sum1 += arr[i];
		}
		for(int i = 2; i < n - 1; i += 2)
		{
			sum2 += arr[i];
		}
		cout << "Формула Симпсона - " << h / 3.0 * (arr[0] + arr[n] + 4 * sum1 + 2 * sum2) << endl;
		n *= 10;
	}
}
