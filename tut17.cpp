//inline funclion & arguments
#include<iostream>
using namespace std;

inline int product(int a,int b){

    return  a*b;

}
int main(){
    int x,y;
    cout<<"value of x & y = "<<endl;
    cin>>x>>y;
    cout<<product(x,y);
    return 0;
}