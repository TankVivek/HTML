#include <stdio.h> 

struct Employee 
{
  int age;  
  char Name[50];
  char Department[20];
  float Salary;
};

union Person 
{
  int ag;  
  char Nam[50];
  char Departent[20];
  float Salar;
};

int main() 
{
  struct Employee emp1;
  union Person Person1;
    
  printf(" The Size of Employee Structure = %d\n", sizeof (emp1) );
  printf(" The Size of Person Union = %d\n", sizeof (Person1));

  return 0;
}
