#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{	
	int m;
	cout << "¬ведите m" << endl;
	cin >> m;
	
	double s = 1;
	for(int i = 1; i <= m; i++)
	{
		s *= i;
	}
	cout << s << endl;
}
