#include<stdio.h>
int main()
{
    char str[30];
   
    printf("Enter the String:");
    scanf("%[^\n]",str);
    int len=0;
    
    while(str[len]!='\0')
    {
        len++;
    }

    printf("Your Enter String length is:%d",len);
}
