#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

struct student {
 char surname[30];
 int mark1;
 int mark2;
 int mark3;
 int mark4;
 student *next,*prev; 
};
main(){
  setlocale(LC_ALL, "Rus");
  int n=0;
  student *head, *tail, *p;

  head=tail=new student;
  head->next=NULL;
  head->prev=NULL;
  do{
  	p=new student;
  
  	
cin>>p->surname>>p->mark1>>p->mark2>>p->mark3>>p->mark4;
  	p->next=NULL;
  	p->prev=tail;
  	tail->next=p;
  	tail=p;
  	n++;
  }while(n!=4);
  tail=new student;
  p->next=tail;
  tail->prev=p; tail->next=0;
  cout<<"Исходный список:"<<"\n";
  for(p=head->next;p->next;p=p->next)
 	printf("%10s %d %d %d %d",p->surname,p->mark1,p->mark2,p->mark3,p->mark4);
  cout<<"Обработанный список:"<<"\n";
  for(p=head->next;p->next;p=p->next){
   if(p->mark1<3||p->mark2<3||p->mark3<3||p->mark4<3){
  p->prev->next=p->next;
  p->next->prev=p->prev;
  free(p);
}
}
  for(p=head->next;p->next;p=p->next)
  cout<<p->surname<<"\t"<<p->mark1<<"\t"<<p->mark2<<"\t"<<p->mark3<<"\t"<<p->mark4<<"\n"; 
  getch();
}
