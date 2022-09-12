#include<stdio.h>
int main()

{

float first,second,sum;

printf("enter the value of amount");
scanf("%f",&first);

printf("enter the Percentage ");
scanf("%f",&second);

sum = first*second/100;

printf("rate of interest :- %f",sum);

return 0;
}
