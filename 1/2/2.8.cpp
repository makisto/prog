#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	double a, b, c, d, max, max2;
	
	cout << "¬ведите 4 числа" << endl;
	cin >> a >> b >> c >> d;
	
	max = a > b && a > c && a > d ? a : b > c && b > d ? b : c > d ? c : d;
	max2 = max == a ? b > c && b > d ? b : c > d ? c : d : 
	max == b ? a > c && a > d ? a : c > d ? c : d : 
	max == c ? a > b && a > d ? a : b > d ? b : d : a > b && a > c ? a : b > c ? b : c; 
	
	/*if(a > b && a > c && a > d)
	{
		max = a;
	}
	else if(b > c && b > d)
	{
		max = b;
	}
	else if(c > d)
	{
		max = c;
	}
	else
	{
		max = d;
	}
	
	if(max == a)
	{
		if(b > c && b > d)
		{
			max2 = b;
		}
		else if(c > d)
		{
			max2 = c;
		}
		else
		{
			max2 = d;
		}
	}
	else if(max == b)
	{
		if(a > c && a > d)
		{
			max2 = a;
		}
		else if(c > d)
		{
			max2 = c;
		}
		else
		{
			max2 = d;
		}
	}
	else if(max == c)
	{
		if(a > b && a > d)
		{
			max2 = a;
		}
		else if(b > d)
		{
			max2 = b;
		}
		else
		{
			max2 = d;
		}
	}
	else if(max == d)
	{
		if(a > b && a > c)
		{
			max2 = a;
		}
		else if(b > c)
		{
			max2 = b;
		}
		else
		{
			max2 = c;
		}
	}*/
		
	cout << "2 наибольших числа - " << max << " " << max2 << endl;
	return 0;
}
