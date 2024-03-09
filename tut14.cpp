#include<iostream>
using namespace std;

struct Employee
   {    
     int eId;
     char favChar;
     float salary;
};
int main()
{
       struct Employee ram;
       ram.eId = 12;
       ram.favChar ='a';
       ram.salary = 12000000;
       cout<<"The value is "<<ram.eId<<endl;
       cout<<"The value is "<<ram.favChar<<endl;
       cout<<"The value is "<<ram.salary<<endl;
        return 0;


}

//#include<iostream>
///using namespace std;

//struct employee
//{
    /* data */
  //  int eId; 
    //char favChar; 
    //float salary; 
//};
//int main() {
  //   struct employee harry;
    // harry.eId = 1;
     //harry.favChar = 'c';
     //harry.salary = 120000000;
     //cout<<"The value is "<<harry.eId<<endl; 
     //cout<<"The value is "<<harry.favChar<<endl; 
     //cout<<"The value is "<<harry.salary<<endl; 
     //return 0;
//}