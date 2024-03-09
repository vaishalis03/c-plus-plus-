//call by value & call by reference

//#include<iostream>
//using namespace std;
//int sum(int a,int b){
 //   int c=a+b;
  //  return c;
//}

//void swapPointer(int* a,int* b){
 //   int temp=*a;
  //  *a=*b;
   // *b=temp;
//}
//int main(){
 //   int x=10,y=20;
  //  cout<<"x= "<<x<<endl<<"y= "<<y<<endl;
   // swapPointer(&x,&y);
   // cout<<"x= "<<x<<endl<<"y= "<<y<<endl;
   // return 0;

//}

#include<iostream>
using namespace std;

voidReferenceVar(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=12,y=14;
    cout<<"x= "<<x<<endl<<"y= "<<y<<endl;
    voidReferenceVar(x,y);
    cout<<"x= "<<x<<endl<<"y= "<<y<<endl;
    return 0;

}