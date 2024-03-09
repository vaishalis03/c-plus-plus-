#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"tell me your age "<<endl;
    cin>>age;

    if(age<18){
        cout<<"you are not come to my party "<<endl;
    }
    else if(age==18){
        cout<<"you need a kid pass to come "<<endl;
    }
    else{
        cout<<"come to my paty "<<endl;
    }
    return 0;

}