#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char *argv[])
{
	srand(time(NULL));
	int a[10][20];
	int temp;
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 20; j++)
		{
			a[i][j] = rand() % 21;
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	for(int i = 0; i < 10; i += 2)
	{
		for(int j = 0; j < 20; j++)
		{
			temp = a[i][j];
			a[i][j] = a[i + 1][j];
			a[i + 1][j] = temp;
		}
	}
	cout << endl;
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 20; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
