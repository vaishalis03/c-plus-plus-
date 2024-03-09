//Parameterized and Default Constructors

#include<iostream>
using namespace std;

class Complex
{
    int a,b;

    public:
    Complex(int, int);

    void printNumber()
    {
        cout<<"ur no. is "<<a<<" + "<<b<<"i"<<endl;
    }
};

Complex::Complex(int x,int y)
{
    a=x;
    b=y;
}

int main(){
    Complex a(2,3);
    a.printNumber();

    Complex b(5,6);
    b.printNumber();

    return 0;


}
