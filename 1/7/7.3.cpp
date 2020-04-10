#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char *argv[])
{
	srand(time(NULL));
	double a[20];
	for(int i = 0; i < 20; i++)
	{
		a[i] = rand() * 20.0 / RAND_MAX - 10.0;
		cout << a[i] << " ";
	}
	cout << endl;
	for(int i = 0; i < 20; i++)
	{
		if(a[i] >= 0)
		{
			cout << a[i] << " ";
		}
	}
}
