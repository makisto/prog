#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int m, d, t, k = 0;
	cout << "������� ����, ����� � ���- " << endl;
	cin >> d >> m >> t;
	if(t % 4 == 0)
	{
		k++;	
	}
	
	switch(m)
	{
		case 1: 
			cout << d << " ����" << endl;
			break;
		case 2:
			cout << d + 31 << " ����" << endl;
			break;
		case 3:
			cout << d + 59 + k << " ����" << endl;
			break;
		case 4: 
			cout << d + 90 + k << " ����" << endl;
			break;
		case 5:
			cout << d + 120 + k << " ����" << endl;
			break;
		case 6:
			cout << d + 151 + k << " ����" << endl;
			break;
		case 7:
			cout << d + 181 + k << " ����" << endl;
			break;
		case 8:
			cout << d + 212 + k << " ����" << endl;
			break;
		case 9:
			cout << d + 243 + k << " ����" << endl;
			break;
		case 10: 
			cout << d + 273 + k << " ����" << endl;
			break;
		case 11:
			cout << d + 304 + k << " ����" << endl;
			break;
		case 12:
			cout << d + 334 + k << " ����" << endl;
			break;
		default:
			cout << "�������� ������" << endl;
			break;			
	}
}
