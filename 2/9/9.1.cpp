#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <conio.h>

using namespace std;

const int n=4;
struct student {
 char surname[30]; 
 int marks[n]; 
 student *next,*head; 
};
void show (student *head) {
 while (head!=NULL) {
  cout<<"\n"<<head->surname;
  for (int i=0; i<n; i++) cout<<" "<<head->marks[i];
  head=head->next;
 }
}
student *sort (student *ph) {
 student *q,*out=NULL,*p,*pr; 
 while (ph !=NULL) { 
  q=ph;ph=ph->next; 
  for (p=out,pr=NULL; p!=NULL && strcmp(q->surname,p->surname)>0;pr=p,p=p->next);
  if (pr==NULL) {q->next=out;out=q;} 
  else {q->next=p;pr->next=q;} 
 }
 return out;
}
main(){
  setlocale(LC_ALL, "Rus");
  student group[]={
  {"Иванов",{3,4,3,5},&group[1]},
  {"Смирнов",{4,5,5,5},&group[2]},
  {"Соболев",{5,4,5,5},&group[3]},
  {"Петров",{2,2,3,2},&group[4]},
  {"Васечкин",{4,4,4,4},NULL}
 };
 cout<<"Исходный список:";
 show(group);
 student *p=sort(group);
 cout<<"\n"<<"Отсортированный список:";
 show(p);
 getch();
}
