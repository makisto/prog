#include <iostream>
#include <math.h>

using namespace std; 

int main(int argc, char *argv[])
{
    double a, b, c, ha, hb, hc, p; 
    
    cout << "������� 3 �������:" << endl;
    cin >> a >> b >> c;
    
    p = 0.5 * (a + b + c);
	
    ha = (2 * sqrt(p * (p - a) * (p - b) * (p - c))) / a;
    hb = (2 * sqrt(p * (p - a) * (p - b) * (p - c))) / b;
    hc = (2 * sqrt(p * (p - a) * (p - b) * (p - c))) / c;
    
    cout << "������ ������������:" << endl;
	cout << ha << endl; 
	cout << hb << endl; 
	cout << hc << endl; 
	
    return 0;
}

