#include<stdio.h>    
int main()    
{    
 int A=0,B=1,C,i,number;    
 printf("Enter the number of elements:");    
 scanf("%d",&number);    
 printf("\n%d %d",A,B);
 for(i=2;i<number;i++)
 {    
  C=A+B;    
  printf(" %d",C);    
  A=B;    
  B=C;    
 }  
  return 0;  
 }    