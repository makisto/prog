#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int m;
	
	cout << "������� ����� ������ - " << endl;
	cin >> m;
	
	switch(m)
	{
		case 1: case 2:
			cout << "1 ������� - ����" << endl;
			break;
		case 3:
			cout << "1 ������� - �����" << endl;
			break;
		case 4: case 5:
			cout << "2 ������� - �����" << endl;
			break;
		case 6:
			cout << "2 ������� - ����" << endl;
			break;
		case 7:case 8:
			cout << "3 ������� - ����" << endl;
			break;
		case 9:
			cout << "3 ������� - �����" << endl;
			break;
		case 10: case 11:
			cout << "4 ������� - �����" << endl;
			break;
		case 12:
			cout << "4 ������� - ����" << endl;
			break;
		default:
			cout << "�������� ������" << endl;
			break;			
	}
	
	return 0;	
}

