#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int a[16];
	int sum = 0;
	cout << "������� ����� �����" << endl;
	for(int i = 0; i < 16; i++)
	{
		cin >> a[i];
		if((i + 1) % 2 == 0)
		{
			sum += a[i];	
		}
		else
		{
			if(a[i] * 2 > 9)
			{
				sum += a[i] * 2 - 9;
			}
			else
			{
				sum += a[i] * 2;
			}
		}
	}
	if(sum % 10 == 0)
	{
		cout << "������ �����" << endl;
	}
	else
	{
		cout << "�������� �����" << endl;
	}
	
	return 0;
}
