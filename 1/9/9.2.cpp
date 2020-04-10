#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char *argv[])
{
	srand(time(NULL));
	double a[5][5];
	double sum;
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
		sum = 0;
		for(int j = 0; j < 5; j++)
		{
			sum += a[i][j];
		}
		for(int j = 0; j < 5; j++)
		{
			a[i][j] /= sum;
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
