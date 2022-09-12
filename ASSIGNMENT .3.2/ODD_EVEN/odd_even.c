#include<stdio.h>

int main ()

{
 //enter a number of odd to show - 0
 //enter a number of even to show - 1

int x;
printf("enter a number : ");
scanf("%d",&x);
printf("%d", x % 2 == 0);
return 0;



}