#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int c;
	cout << "������� ��� - " << endl;
	cin >> c;
	
	c %= 12;
	
	switch(c)
	{
		case 0:
			cout << "��� ��������" << endl;
			break;
		case 1:
			cout << "��� ������" << endl;
			break;
		case 2:
			cout << "��� ������" << endl;
			break;
		case 3:
			cout << "��� ������" << endl;
			break;
		case 4:
			cout << "��� �����" << endl;
			break;
		case 5:
			cout << "��� ������" << endl;
			break;
		case 6:
			cout << "��� �����" << endl;
			break;
		case 7:
			cout << "��� �����" << endl;
			break;
		case 8:
			cout << "��� �������" << endl;
			break;
		case 9:
			cout << "��� ����" << endl;
			break;
		case 10:
			cout << "��� ������" << endl;
			break;
		case 11:
			cout << "��� ����" << endl;
			break;
		default:
			cout << "�������� ������" << endl;
	}
	
	return 0;
}
