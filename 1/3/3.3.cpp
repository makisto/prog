#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int c;
	cout << "Введите год - " << endl;
	cin >> c;
	
	c %= 12;
	
	switch(c)
	{
		case 0:
			cout << "Год обезьяны" << endl;
			break;
		case 1:
			cout << "Год петуха" << endl;
			break;
		case 2:
			cout << "Год собаки" << endl;
			break;
		case 3:
			cout << "Год свиньи" << endl;
			break;
		case 4:
			cout << "Год крысы" << endl;
			break;
		case 5:
			cout << "Год коровы" << endl;
			break;
		case 6:
			cout << "Год тигра" << endl;
			break;
		case 7:
			cout << "Год зайца" << endl;
			break;
		case 8:
			cout << "Год дракона" << endl;
			break;
		case 9:
			cout << "Год змеи" << endl;
			break;
		case 10:
			cout << "Год лошади" << endl;
			break;
		case 11:
			cout << "Год овцы" << endl;
			break;
		default:
			cout << "Неверные данные" << endl;
	}
	
	return 0;
}
