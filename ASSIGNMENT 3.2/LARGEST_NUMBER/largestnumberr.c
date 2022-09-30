#include <stdio.h>

int main()
{
int A1;
int B2 = 0;
int C3 = 0;

printf("enter the number");
scanf("%d",&A1);

while(A1 > 0)

{ 
C3 = A1 % 10;

 if(C3>B2) {
 
 B2=C3;   } 

A1 = A1 /10;

} 

printf("largest %d\n",B2);
return 0;
}

    