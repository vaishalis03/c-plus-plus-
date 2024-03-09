
//manipulators like endl
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    //without setw
    int a=2,b=23,c=456,d=5467;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    
    //with setw
   

    cout<<setw(4)<<a<<endl;
    cout<<setw(4)<<b<<endl;
    cout<<setw(4)<<c<<endl;
    cout<<setw(4)<<d<<endl;
    return 0;
   


}