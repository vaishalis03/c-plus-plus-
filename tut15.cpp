//function

#include<iostream>
using namespace std;

int sum(int a,int b){
    int c=a+b;
    return c;
}
int main(){
    int num1, num2;
    cout<<"the value of num1 is "<<endl;
    cin>>num1;
    cout<<"the value of num2 is "<<endl;
    cin>>num2;
    cout<<"sum is "<<sum(num1,num2)<<endl;
    return 0;

}    
