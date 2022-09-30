/*
            *
          * *
        * * *
      * * * * 
    * * * * * 
*/

#include<stdio.h>

int main()
{
    int i,j,n=5,k;
    for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
             if(j==1||j==i||(i==n&&j==3)){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    for(i=1;i<=n;i++){
        for(k=1;k<=i;k++){
            printf(" ");
        }
        for(j=1;j<=n-i;j++){
            if(j==1||j==n-i){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}