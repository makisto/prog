#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	double a, b, c, d, e, sum = 0;
	
	cout << "¬ведите 5 чисел" << endl;
	cin >> a >> b >> c >> d >> e;
	
	sum += a > 0 ? a : 0; 
	sum += b > 0 ? b : 0;
	sum += c > 0 ? c : 0;
	sum += d > 0 ? d : 0;
	sum += e > 0 ? e : 0;
	
	/*if(a > 0) 
	{
		sum += a;	
	}
	if(b > 0) 
	{
		sum += b;	
	}
	if(c > 0) 
	{
		sum += c;	
	}
	if(d > 0) 
	{
		sum += d;	
	}
	if(e > 0) 
	{
		sum += e;	
	}*/
	
	cout << "—умма положительных чисел - " << sum << endl;
	
	return 0;
}
