#include <stdio.h>
 
int main () {

   /* local variable definition */
   int n=1,a;
 printf("enter the value of a");
 scanf("%d",&a);
   /* while loop execution */
   while(n <= 10)
    {
      printf("%d * %d = %d\n",a,n, a * n); 
      n++;
   }
 
   return 0;
} 