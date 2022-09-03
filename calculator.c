#include<stdio.h>
  
  int main(){
  
      char operator;
      double first, second;
  
      printf("Enter the Operator ( +, -, *, / ) : ");
      scanf("%c",&operator);
 
     printf("Enter the two Numbers one by one : ");
     scanf("%lf %lf",&first,&second);
 
     switch (operator)
     {
 
     case '+':
         printf("%.2lf + %.2lf = %.2lf",first,second,(first+second));
         break;
         
     case '-':
         printf("%.2lf - %.2lf = %.2lf",first,second,(first-second));
         break;
 
     case '*':
         printf("%.2lf * %.2lf = %.2lf",first,second,(first*second));
         break;
 
     case '/':
         if( second != 0.0 )
             printf("%.2lf / %.2lf = %.2lf",first,second,(first/second));
         else 
             printf("Divide by Zero situation");
         break;
     
     default:
         printf("%c is an invalid Operator",operator);
         
     }
 
     return 0;
 }