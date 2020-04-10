#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char *argv[])
{
	srand(time(NULL));
	int c[20];
	int d[20];
	int e[40];
	int temp;
	int index = 0;
	for(int i = 0; i < 20; i++)
	{
		c[i] = rand() % 21;
		d[i] = rand() % 21;
		cout << c[i] << " ";
	}
	cout << endl;
	for(int i = 0; i < 20; i++)
	{
		cout << d[i] << " ";
	}
	for(int i = 0; i < 19; i++)
	{
		for(int j = i + 1; j < 20; j++)
		{
			if(c[i] > c[j])
			{
				temp = c[i];
				c[i] = c[j];
				c[j] = temp;	
			}
			if(d[i] > d[j])
			{
				temp = d[i];
				d[i] = d[j];
				d[j] = temp;	
			}	
		}
	}
	int i = 0;
	int j = 0;
	while(i < 20 && j < 20)
	{
		if(c[i] > d[j])
		{
			e[index] = d[j];
			j++;
		}
		else
		{
			e[index] = c[i];
			i++;	
		}
		index++;
	}
	while(i < 20)
	{
		e[index] = c[i];
		i++;	
		index++;
	}
	while(j < 20)
	{
		e[index] = d[j];
		j++;
		index++;
	}
	cout << endl;
	for(int i = 0; i < 40; i++)
	{
		cout << e[i] << " ";
	}
}
