#include <stdio.h>    
     
int main()    
{    
   int arr[] = {25, 11, 7, 75, 56};      


    int length = sizeof(arr)/sizeof(arr[0]);    
   
    int max = arr[0];    
        
    for (int i = 0; i < length; i++)
    {      
       if(arr[i] > max)    
           max = arr[i];    
    }      
    printf("Largest element present in given array: %d\n", max);    
    return 0;    
}    