// #include<iostream>
// using namespace std;

// class Simple{
//     int data1;
//     int data2;
//     int data3;

//     public:

//     Simple(int a,int b=12,int c=27){
//         data1=a;
//         data2=b;
//         data3=c;
//     }
//     void printData();
// };


// void Simple::printData(){
//     cout<<"data of a is "<<data1<<" b is "<<data2<<" and c is "<<data3<<endl;
// }
// int main(){

//     Simple s1(1);
//     s1.printData();

//     return 0;

// }

#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:

    Complex(int x=0,int y=0){
        a=x;
        b=y;
        cout<<"An object of class Complex is created and a constructor is invoked."<<endl;
    }

    void printData(void){
        cout<<a<<"+"<<b<<"i"<<endl;
    }

};

int main(){
    Complex c1(3);
    c1.printData();

    Complex c2(12);
    c2.printData();

    Complex c3(3,12);
    c3.printData();

    return 0;
}