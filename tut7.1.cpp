#include<iostream>
using namespace std;

int c=20;

int main(){
    int a=10,b=30;
    int c=a+b;
    cout<<"local value = "<<c<<endl;
    cout<<"globle value = "<<::c<<endl;
    return 0;

}