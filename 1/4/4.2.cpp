#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
	double s = 0;
	for(int i = 1; i <= 25; i++)
	{
		s += sin(i);
	}
	cout << s << endl;
}
