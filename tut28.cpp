//friend function

#include<iostream>
using namespace std;

class Y;
class X
{
    int data;

    public:
    void setValue(int value){
        data=value;
    }
    friend void add(X,Y);
};

class Y
{
    int num;

    public:
    void setValue(int value){
        num=value;
    }
    friend void add(X,Y);

};


void add(X o1,Y o2)
{
    cout<<"summing of data gives "<<o1.data+o2.num;

}

int main()
{
    X a1;
    a1.setValue(5);

    Y b1;
    b1.setValue(9);

    add(a1,b1);
    return 0; 

}