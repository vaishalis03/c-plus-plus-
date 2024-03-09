#include<iostream>
using namespace std;
int main(){
    int a=3;
    int* b= &a;

    cout<<"the address of a "<<&a<<endl;
    cout<<"the address of a "<<b<<endl;
    cout<<"the address of b "<<*b<<endl;
    return 0;

}