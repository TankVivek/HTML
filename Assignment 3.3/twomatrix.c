#include<stdio.h>
 
void Matrix_Display(int a[][20],int n)
{
     int i,j;
     for(i=0; i<n; i++)
     {        
      for(j=0; j<n; j++)
       {
        printf(" %d",a[i][j]);   
       }
      printf("\n");
     }
 
}
 
int main()
{
    int n,i,j,k;
    int a[20][20];
    int b[20][20];
    int c[20][20];
    
    printf("\n Enter the dimensions of the 2 Square matrices: ");
    scanf("%d",&n);
    
    printf("\n Enter elements of Matrix A: ");
    for(i=0; i<n; i++)
    for(j=0; j<n; j++)
    scanf("%d",&a[i][j]);
    
    printf("\n Enter elements of Matrix B: ");
    for(i=0; i<n; i++)
    for(j=0; j<n; j++)
    scanf("%d",&b[i][j]);
    
    printf("\n Matrix A: \n");
    Matrix_Display(a,n);
           
    printf("\n\n Matrix B: \n");
    Matrix_Display(b,n);
    
    //Addition
    for(i=0; i<n; i++)
    for(j=0; j<n; j++)
    c[i][j]=a[i][j]+b[i][j];
    
    printf("\n\n Addition of A and B gives: \n");
    Matrix_Display(c,n);
    
     //Subtraction
    for(i=0; i<n; i++)
    for(j=0; j<n; j++)
    c[i][j]=a[i][j]-b[i][j];
    
    printf("\n\n Subtraction of A and B gives: \n");
    Matrix_Display(c,n);
    
    //Multiplication
    for(i=0; i<n; i++)
    for(j=0; j<n; j++)
    {
     c[i][j]=0;
     for(k=0; k<n; k++)
     c[i][j]+=a[i][k]*b[k][j];
    }
    
    printf("\n\n Multiplication of A and B gives: \n");
    Matrix_Display(c,n);
       
}
 