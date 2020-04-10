#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char *argv[])
{
	srand(time(NULL));
	double arr[20];
	double a = 0;
	double b = 10;
	for(int i = 0; i < 20; i++)
	{
		arr[i] = rand() * (b - a) / RAND_MAX + a;
		cout << arr[i] << " ";
	}
	cout << endl << "Искомые числа:" << endl;
	for(int i = 1; i < 19; i++)
	{
		if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
		{
			cout << arr[i] << " ";
		}
	}
	
	return 0;
}
