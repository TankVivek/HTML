#include <stdio.h>
 
int main () {

   /* local variable definition */
   int a,n = 1;
   printf("enter the number ");
   scanf("%d",&a);
   /* while loop execution */
   while(n <= 10)
    {
      printf("%d*%d=%d\n",a,n,a * n);n++;
   }
 
   return 0;
}
