//function overloaded

#include<iostream>
using namespace  std;

int sum(int a,int b){
    cout<<"sum using 2 arguments "<<endl;
    return a+b;
}
int sum(int a,int b,int c){
    cout<<"sum using 3 arguments "<<endl;
    return a+b+c;
}
int main(){
cout<<"sum of "<<sum(2,7)<<endl;
cout<<"sum of "<<sum(2,7,1)<<endl;
return 0;
}
