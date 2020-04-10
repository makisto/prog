#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
	int n, x;
	cout << "¬ведите n и x- " << endl;
	cin >> n >> x;
	
	double s = 1;
	double p = 1;
	for(int i = 1; i <= n; i++)
	{
		p *= i;
		s += pow(x, i) / p;
	}
	cout << s << endl;
}
