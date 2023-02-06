
// Find Area


#include<stdio.h>
int main()

{
char option;
float first,second,pi=3.14,division=2;

printf("1 circle 2 rectangle 3 triangle :-");
scanf("%c",&option);

switch (option)
{

case '1':
   
printf("enter the value of circle radius :-");
scanf("%f",&first); 
break;

case '2': 

printf("enter the value of rectangle , first enter length second enter width :-");
scanf("%f %f",&first,&second);
break;

case '3':
 
printf("enter the value of triangle ,  first enter base second enter height :-");
scanf("%f %f",&second,&first);
break;
}

switch (option)

{
case '1':

printf("%.2f * %.2f = %.2f  ",first,pi,(first*first*pi));
break;
 
case '2':
   
printf("%.2f * %.2f = %.2f",first,second,(first*second));
break;

case '3':

printf("%.2f * %.2f = %.2f ",first,second,(first*second/division));
break;

}

return 0;
}