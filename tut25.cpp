//array of object & passing object as function arguments


#include<iostream>
using namespace std;

class Employee
{
   int id;
   int salary;

   public:
 
   void setId(void)
   {
    salary=120;
    cout<<"enter the id of employee "<<endl;
    cin>>id;
   }

   void getId(void)
   {
    cout<<"the id of this employee is "<<id<<endl;
   }

};

int main()
{
    Employee fb[4];
    for(int i=0;i<4;i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
} 