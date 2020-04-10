#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctime>

int square; int per;

using namespace std;

void trigon(int a, int b, int c){
	
	if ((a+b)>c&&(a+c)>b&&(b+c)>a) {
		square=a*b*c;
		per=a+b+c;
	}
	else cout << "Такого треугольника не существует";
}

int main(){
	int a,b,c;
	cout << "Введите длины сторон треугольника\n";
	cin >> a; cin >> b; cin >>c;
	cout << "\n";
	trigon(a,b,c);
	cout << *per << " " << *square;
	
	
	getch();
}
