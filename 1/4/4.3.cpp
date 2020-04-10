#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
	int n;
	cout << "¬ведите N - " << endl;
	cin >> n;
	
	double s = 0;
	for(int i = 2; i <= n * 2; i += 2)
	{
		s += tan(i);
	}
	cout << s << endl;
}
