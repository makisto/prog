#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char *argv[])
{
	srand(time(NULL));
	int arr[20];
	int a = -10;
	int b = 10;
	for(int i = 0; i < 20; i++)
	{
		arr[i] = rand() % (b - a + 1) + a;
		cout << arr[i] << " ";
	}
	cout << endl << "Положительные числа:" << endl;
	for(int i = 0; i < 20; i++)
	{
		if(arr[i] >= 0)
		{
			cout << arr[i] << " ";
		}
	}
	cout << endl << "Отрицательные числа:" << endl;
	for(int i = 0; i < 20; i++)
	{
		if(arr[i] < 0)
		{
			cout << arr[i] << " ";
		}
	}
	
	return 0;
}
