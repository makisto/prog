#include <cstdio>
#include <stdlib.h>
#include <string.h>
int main()
{
	int const n = 255, m=10;
	char s1[m][n], s2[n], sch[n], k = 0, i = 0, j = 0, sss = ' ';
	char a[m];
	printf("Input text:");
	gets(s2);
	for (int i=0; i < m; i++)
	{
		a[i] = 0;
	}
	while (s2[i-1] != '\0')
	{
		if (s2[i] == ' ')
		{
			s1[k][j] = '\0';
			i++;
			j = 0;
			for (int l = 0; l < k; l++)
			{
				if (!strcmp(s1[l], s1[k]))
				{
					a[l]++;
					k--;
				}
			}
			if (s2[i]!='\0')
			k++;
		}
		else
		{
			s1[k][j] = s2[i];
			i++;
			j++;
		}
		if (s2[i] == '\0')
		{
			s1[k][j] = '\0';
			for (int l = 0; l < k; l++)
			{
				if (!strcmp(s1[l], s1[k]))
				{
					a[l]++;
					k--;
				}
			}
		}
	}
	printf("%d \n", k+1);
	for (i = 0; i <= k; i++)
	{
		printf("%d ", a[i]+1);  puts(s1[i]);
	}
	system("pause");
	return 0;
}
