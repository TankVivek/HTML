#include<iostream>
using namespace std;
class A{
    int a,b;
    public :
    A(int a,int b){
        this->a=a;
        this->b=b;
    
    
    }
    void Addition(){
        cout<<"Addition of "<<a<<" And "<<b<<" is :"<<a+b<<endl;
    }
    void Multi(){
        cout<<"Multi of "<<a<<" And "<<b<<" is :"<<a*b<<endl;
    }
    void Subtraction(){
        cout<<"Subtraction of "<<a<<" And "<<b<<" is :"<<a-b<<endl;
    }
    void Division(){
        cout<<"Division of "<<a<<" And "<<b<<" is :"<<a/b<<endl;
    }

  {  cout << "Enter two values:";
     cin >> a>>b;
  }
};
int main()
{
    A a1(a,b);
    
    a1.Addition();
    a1.Multi();
    a1.Subtraction();
    a1.Division();
    return 0;
}