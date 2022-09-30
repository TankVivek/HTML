#include<stdio.h>  
int main()   
{   
  int x, y;  
  printf("Enter the value of x and y?");  
  scanf("%d %d",&x,&y);  
  printf("before swapping numbers: %d   %d\n",x,y);  
  
/*swapping*/  
  x = x + y;   
  y = x - y;    
  x = x - y;  
  printf("After swapping: %d    %d",x,y);
     
  return 0;   
}  