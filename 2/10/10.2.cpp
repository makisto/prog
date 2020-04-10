#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream>

using namespace std;

main()
{ 
  FILE *pf, *pr; 
  char text[80];                     
  pf=fopen("new1.txt","w");  
  for(int i = 0; i< 5; i++)
  {
  gets(text);
  fprintf(pf,"%s\n",text);
  }
  system("CLS"); 
  fclose(pf); 
  pf=fopen("new1.txt","r");                               
  pr=fopen("new2.txt","w"); 
  for(int i = 1; i< 5; i++)
  {
  while(fgets(text,80,pf))
  {
  for(int j = strlen(text); j >= 0; j--)
  fputc(text[j],pr);
  }
}
  fclose(pr);
  fclose(pf);                           
  getch();
}

