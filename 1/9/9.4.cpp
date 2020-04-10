#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char *argv[])
{
	int n = 3;
	srand(time(NULL));
	int a[n][n];
	int temp = 0, k = 0, f = 0, sum[n], sum1[n], sum2, sum3;
	while(!k)
	{
		sum2 = 0;
		sum3 = 0;
		for(int i = 0; i < n; i++)
		{
			sum[i] = 0;
			sum1[i] = 0;
			for(int j = 0; j < n; j++)
			{
				a[i][j] = rand() % n;
			}
		}
		temp++;	
		for(int i = 0; i < n; i++)
		{
			sum2 += a[i][i];
			sum3 += a[n - 1 - i][i];
			for(int j = 0; j < n; j++)
			{
				sum[i] += a[i][j];
				sum1[i] += a[j][i];
			}
		}
		/*for(int i = 1; i < n; i++)
		{
			if((sum[0] != sum[i]) || (sum1[0] != sum1[i]))
			{
				f = 1;
				break;	
			}
		}
		if(f == 0)
		{
			if(sum[0] == sum1[0] && sum2 == sum3)
			{
				if(sum[0] == sum2)
				{
					k = 1;
				}	
			}	
		}*/
		if(sum[0] == sum[1] && sum[1] == sum[2])
		{
			if(sum1[0] == sum1[1] && sum1[1] == sum1[2])
			{
				if(sum[0] == sum1[0])
				{
					if(sum2 == sum3)
					{
						if(sum[0] == sum2)
						{
							k = 1;
						}
					}
				}	
			}	
		}
	}
		
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Количество генераций - " << temp << endl;
}

