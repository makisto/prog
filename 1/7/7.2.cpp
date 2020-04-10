#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char *argv[])
{
	srand(time(NULL));
	int a[15];
	int f = 0;
	for(int i = 0; i < 15; i++)
	{
		a[i] = rand() % 11;
		cout << a[i] << " ";
	}
	cout << endl;
	for(int i = 0; i < 15; i++)
	{
		for(int j = i + 1; j < 15; j++)
		{
			if(a[i] == a[j])
			{
				f = 1;
				break;
			}
		}
		if(f == 0)
		{
			cout << a[i] << " ";
		}
		f = 0;
	}
}

