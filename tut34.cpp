//copy contructor


#include<iostream>
using namespace std;

class Number{
    int a;
    public:

    Number(){
        a=0;
    }
    Number(int num){
        a=num;
    }
    Number(Number &obj){
        cout<<"copy constructor is called!!!!! "<<endl;
        a=obj.a;
    }
    void display(){
        cout<<"the number for this object is "<<a<<endl;
    }

};
int main(){
    Number x,y,z(45),z2;

    x.display();
    y.display();
    z.display();

    Number z1(z);
    z1.display();

    z2=z;
    z2.display();





    return 0;
}