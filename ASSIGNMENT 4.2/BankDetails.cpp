
// back detailes 

#include <iostream>

    using namespace std;

    class Bank

    {
                double acc_no, acc_bal;

                char dep_name[100];

         public:

                void accept_Details()

                {

                        cout<<"Enter Depositor Account Number ";
                         cin>>acc_no;

                         cout<<"Enter Depositor Name as per Document ";

                         cin>>dep_name;

                         cout<<"Enter Depositor Account Balance ";

                         cin>>acc_bal;

             }

             void display_Details()

             {
             cout << "    Account Number :- "<< acc_no << "\t";

             cout << "      Enter Name as per Document : "<< dep_name << "\t";

             cout << "        Enter Account Balance :- "<< acc_bal << "\t";
                 
             }
  };

  int main()

  {
             Bank b1;

             b1.accept_Details();

             cout<<"\n\n   *********************************************   Depositor Information  ********************************************* \n \n";

             b1.display_Details();

             cout<<"\n \n   **********************************************    End Information   ************************************************  ";

            return 0;

  }