#include<stdio.h>
int main ()

{

char option;
float DAY,YEAR ;

printf("CHOOSE AN OPTION  \n1 DAYS INTO YEAR \n2 YEAR INTO DAYS \n ");
scanf("%c",&option);




switch (option)

{

case '1':
printf("ENTER THE DAYS :-");
scanf("%C",&DAY);
   break;

case '2':
printf("ENTER THE YEAR");
scanf("%C",&YEAR);
break;

}
switch (option)
{
case '1':

   printf("%.2f / %.2f = %.2f  ",DAY/365);
    break;

default:
    break;
}




return 0;


}