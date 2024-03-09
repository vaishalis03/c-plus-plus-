//static data member


#include<iostream>
using namespace std;

    class Employee
    {
        int id;
        static int count;
        
        public:
        void setData(void)
        {

            cout<<"Enter thr id "<<endl;
            cin>>id;
            count++;
        }
        void getData(void)
        {
            cout<<"the id of the employee is "<<id<<endl<<"and number of the employee is "<<count<<endl;
        }
         static void getCount(void)
         {
            cout<<"count of the employee "<<count<<endl;
         }
    };

    int Employee::count;

    int main()
    {

        Employee ram1,ram2,ram3;

        ram1.setData();
        ram1.getData();
        Employee::getCount();

        ram2.setData();
        ram2.getData();
        Employee::getCount();

        ram3.setData();
        ram3.getData();
        Employee::getCount();

        return 0;
    
    
    }