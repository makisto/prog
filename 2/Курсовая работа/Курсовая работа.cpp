#include <iostream>  
#include <ctime> 
#include <windows.h> 
#include <conio.h> 

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

const int weight = 60;
const int height = 25;

enum values{UP, DOWN, LEFT, RIGHT, STOP, end, point, move};

struct body{ 
	COORD *t; 
	int score; 
};
	
struct snake{ 
	body piton; 
	COORD fruit; 
	int dx;
	int dy; 
	int move; 
}value;

void gotoxy(int x, int y)
{
	COORD place = {x, y};
	SetConsoleCursorPosition(console, place);
} 

void field() 
{
	gotoxy(2, 2); 
	for(int i = 0; i < weight; i++)
	cout<<"#";
	gotoxy(2, height - 1);
	for(int i = 0; i < weight; i++)
	cout<<"#";				
	for(int i = 3; i < height; i++)
	{
	gotoxy(2, i); 
	cout <<"#"<<endl;
	}
	for(int i = 3; i < height; i++)
	{
	gotoxy(weight + 1, i); 
	cout <<"#"<<endl;
	}
}

void addfruit(snake &value) 
{	
	int i;
	int n = value.piton.score;
	do{
	value.fruit.X = rand() % 56+3;
    value.fruit.Y = rand() % 19+3; 
	for(i = 0; i < n; i++)
	if(value.fruit.X == value.piton.t[i].X && value.fruit.Y == value.piton.t[i].Y)
	break;
	}while(i < n);
	SetConsoleCursorPosition(console, value.fruit); 
	SetConsoleTextAttribute(console, 0x0c); 
	cout<<"0"; 
	SetConsoleTextAttribute(console, 0x0f);
}

void start(snake &value) 
{
	value.piton.score = 4; 
	value.piton.t = new COORD [4];
	for(int i = 0; i < 4; i++)
	{
		value.piton.t[i].X = weight / 2 + i;
		value.piton.t[i].Y = height / 2;	
	}
	value.move = RIGHT;
	value.dx = 1;
	value.dy = 0;
	addfruit(value);
}

int logic(snake &value)
{
	int &n = value.piton.score;
	COORD head = value.piton.t[n - 1]; 
	COORD tail = value.piton.t[0];
	COORD next;
	next.X = head.X + value.dx;
	next.Y = head.Y + value.dy; 
		
	for(int i = 0; i < n; i++)
	if((next.X == value.piton.t[i].X && next.Y == value.piton.t[i].Y ) 
	|| (next.X < 3 || next.Y < 3 || next.X > weight || next.Y > height - 2)) 
	{
	value.move = STOP;
	return end;	
	}
	
	if(next.X == value.fruit.X && next.Y == value.fruit.Y)
	{
	    COORD *temp = new COORD[++n]; 
		for(int i = 0; i < n; i++)
		temp[i] = value.piton.t[i]; 
		temp[n - 1] = next; 
		delete [] value.piton.t;
		value.piton.t = temp;		
		SetConsoleCursorPosition(console, head);
		SetConsoleTextAttribute(console, 0x0a); 
		cout<<"*";
		SetConsoleCursorPosition(console,next);
		cout<<"0";
		addfruit(value);
		return point;
	}
	for(int i = 0; i < n - 1; i++)
	value.piton.t[i] = value.piton.t[i + 1];
	value.piton.t[n - 1] = next;
	SetConsoleCursorPosition(console, tail);
	cout<<" ";	
	SetConsoleCursorPosition(console, head);
	SetConsoleTextAttribute(console, 0x0a);
	cout<<"*";
	SetConsoleCursorPosition(console, next);
	SetConsoleTextAttribute(console, 0x0f); 
	cout<<"0";	
	return move;
}

void moving()
{
	int move = getch();	
	if(move == 72 && value.move != DOWN && value.move != STOP)
	{
        value.move = UP;
		value.dx = 0;
		value.dy = -1;
	}
	else if(move == 80 && value.move != UP && value.move != STOP)
	{
		value.move = DOWN;
		value.dx = 0;
		value.dy = 1;
	}
	else if(move == 75 && value.move != RIGHT && value.move != STOP)
	{
		value.move = LEFT;
		value.dx = -1;
		value.dy = 0;
	}
	else if(move == 77 && value.move != LEFT && value.move != STOP)
	{
		value.move = RIGHT;
		value.dx = 1;
		value.dy = 0;
	}
}	

int menu()
{
	int k = 100;
	m:system("cls");
	SetConsoleTextAttribute(console, 0x0f);
 	cout<<"1 - Играть"<<endl;
 	cout<<"2 - Уровень сложности"<<endl;
 	cout<<"3 - Выход из игры"<<endl;
 	int score = 0;
	int t = getch();
	switch(t){
		case '1':
		system("cls");
		start(value);
		field();
	while(1)
	{
        while(!kbhit()) 
		{			
			switch (logic(value))
			{		
			case point:
				score += 10;
				break;
							
			case end:
				Sleep(1000);
                system("cls");
				gotoxy(25, 10); 
				cout<<"Игра окончена.Итоговый счет:"<<score<<"\n\t\t\tНажмите ESC, чтобы выйти в меню";
				if(getch() == 27)
				goto m;
				break;
			}
		    Sleep(k); 
		}
		moving();
	}
    break;
    
    case '2':{
	system("cls");
	cout<<"1 - Простой"<<endl;
	cout<<"2 - Средний"<<endl;
	cout<<"3 - Сложный"<<endl;
	cout<<"0 - Выход в меню"<<endl;
	int s = getch();
	switch(s){
		case '1':
		k = 100;
		goto m;
		break;
		
		case '2':
		k = 50;
		goto m;
		break;
		
		case '3':
		k = 25;
		goto m;
		break;
		
		case '0':
		goto m;
		break;
	}
}
	break;

	case '3':return 0;
  }
}

main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	menu();
}
