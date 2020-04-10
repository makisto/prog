#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream>

using namespace std;

main()
{ 
  FILE *pf, *pr, *po; 
  char text[80];  
  int n=3;
  cout<<"Stroki:";
  //cin>>n;                   
  po=fopen("ab.txt","w");  
  for(int i = 0; i<= n; i++)
  {
  gets(text);
 // fputs(text,po);
   fprintf(po,"%s\n",text);
  }
  system("CLS"); 
  fclose(po);
  po=fopen("ab.txt","r");                               
  pf=fopen("a.txt","w");
  pr=fopen("b.txt","w"); 
  for(int i = 0; i<= n; i++)
  {
  while(fgets(text,80,po))
  {
  for(int j = 0; j <= strlen(text); j++)
  if(text[0] =='a'||text[0] =='e'||text[0] =='y'||text[0] =='u'||text[0] =='o'||text[0] =='i')
  fputc(text[j],pf);
  else
  fputc(text[j],pr);
}
}
  fclose(pr);
  fclose(pf);
  fclose(po);
  getch();
}

