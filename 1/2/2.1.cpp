#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    double a, b, c, d, e, f, y1, y2, k;
    
    cout << "������� 6 �����:" << endl;
    cin >> a >> b >> c >> d >> e >> f;
    
    y1 = a + b + c + d + e + f;
    y2 = a * b * c * d * e * f;
    
    k = y1 > y2 ? y1 - y2 : y1 < y2 ? y2 - y1 : 0;
    
    if(y1 > y2) 
	{
		//k = y1 - y2;
		cout << "����� ����� ������ �� " << k << endl;
	}
   	else if(y1 < y2)
    {
    	//k = y2 - y1;
    	cout << "������������ ����� ������ �� " << k << endl;
	}
	else
	{
		cout << "����� � ������������ �����" << endl;
	}
	
    return 0;
}

