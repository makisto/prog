#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{	
	double s = 0;
	for(double i = 0.1; i <= 1.9; i += 0.2)
	{
		s += log(i);
	}
	cout << s << endl;
}
