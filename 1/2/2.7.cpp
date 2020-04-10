#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	double k, m, n, max, mid,min;
	
	cout << "¬ведите 3 числа" << endl;
	cin >> k >> m >> n;
	
	max = n > m && n > k ? n : m > k ? m : k;
	min = n < m && n < k ? n : m < k ? m : k;
	mid = (n == max && m == min) || (n == min && m == max) ? k : (n == max && k == min) || (n == min && k == max) ? m : n;
	
	/*if(n > m && n > k)
	{
		max = n;
	}
	else if(m > k)
	{
		max = m;
	}
	else
	{
		max = k;
	}
	
	if(n < m && n < k)
	{
		min = n;
	}
	else if(m < k)
	{
		min = m;
	}
	else
	{
		min = k;
	}
	
	if((n == max && m == min) || (n == min && m == max))
	{
		mid = k;
	}
	else if((n == max && k == min) || (n == min && k == max))
	{
		mid = m;
	}
	else
	{
		mid = n;
	}*/
			
	n = max;
	m = mid;
	k = min;
	
	cout << "K < M < N - " << k << " " << m << " " << n << endl;
	return 0;
}
