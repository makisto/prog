#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	double s = 1;
	for(int i = 2; i <= 12; i += 2)
	{
		s *= i;
	}
	cout << s << endl;
}
