#include <iostream>

using namespace std;
	
int main() 
{
	int n; 
	double n1 = 1;
	double p, k;
	cout << "¬ведите n" << endl;
	cin >> n;
	
	for(int i = 2; i <= n; i++)
	{
		n1 *= i;
	}

	int a[n];
	for(int i = 1; i <= n; i++)
	{
		p = 1;
		k = 1;
		for(int j = 1; j <= i; j++)
		{
			p *= j;
		}
		for(int j = 1; j <= n - i; j++)
		{
			k *= j;
		}
		a[i - 1] = n1 / (p * k);
		cout << a[i - 1] << " ";
	}
	
	return 0;
}  
