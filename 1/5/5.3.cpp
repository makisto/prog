#include <iostream> 

using namespace std; 

int main(int argc, char *argv[]) 
{ 
	int n, f, j, i = 2, sum = 0; 
	cout << "Введите n" << endl;
	cin >> n;
	while(i <= n)
 	{ 
 		f = 1;
		j = 2; 
 		while(j * j <= i)
		{
			if(i % j == 0)
			{
				f = 0; 
				break;
			}
			j++;
		}
	 	if(f) 
		{
			sum++;
		 	cout << i << " ";
		}
		i++;	
	}
	cout << endl << "Количество простых чисел - " << sum << endl;
	
	return 0;
} 
