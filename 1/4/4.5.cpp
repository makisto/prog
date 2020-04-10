#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{	
	int x;
	cout << "¬ведите X" << endl;
	cin >> x;
	
	double s = 0;
	double k = 0.18;
	for(int i = 1; i <= 10; i++)
	{
		s += pow(k * x, i);
		k += 0.02;
	}
	cout << s << endl;
}
