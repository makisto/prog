#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char *argv[])
{
	srand(time(NULL));
	double a[5][5];
	double b[5][5];
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			a[i][j] = rand() * 10.0 / RAND_MAX;
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			b[i][j] = a[j][i];
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
}           
