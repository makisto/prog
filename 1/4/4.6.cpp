#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{	
	int n;
	cout << "¬ведите n" << endl;
	cin >> n;
	
	double s = 0;
	for(int i = 1; i <= n; i++)
	{
		if(i % 2 == 1)
		{
			s += i;	
		}
		else
		{
			s -= i;	
		}
	}
	cout << s << endl;
}
