#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int c;
	m:cout << "Введите число - " << endl;
	cin >> c;
	
	switch(c)
	{
		case - 9:
			cout << "Минус девять" << endl;
			break;
		case - 8:
			cout << "Минус восемь" << endl;
			break;
		case - 7:
			cout << "Минус семь" << endl;
			break;
		case - 6:
			cout << "Минус шесть" << endl;
			break;
		case - 5:
			cout << "Минус пять" << endl;
			break;
		case - 4:
			cout << "Минус четыре" << endl;
			break;
		case - 3:
			cout << "Минус три" << endl;
			break;
		case - 2:
			cout << "Минус два" << endl;
			break;
		case - 1:
			cout << "Минус один" << endl;
			break;
		case 0:
			cout << "Ноль" << endl;
			break;
		case 1:
			cout << "Один" << endl;
			break;
		case 2:
			cout << "Два" << endl;
			break;
		case 3:
			cout << "Три" << endl;
			break;
		case 4:
			cout << "Четыре" << endl;
			break;
		case 5:
			cout << "Пять" << endl;
			break;
		case 6:
			cout << "Шесть" << endl;
			break;
		case 7:
			cout << "Семь" << endl;
			break;
		case 8:
			cout << "Восемь" << endl;
			break;
		case 9:
			cout << "Девять" << endl;
			break;
		default:
			cout << "Неверные данные" << endl;
			goto m;	
	}
	
	return 0;
}
