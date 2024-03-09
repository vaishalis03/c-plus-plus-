#include <iostream>
using namespace std;
int gamewin(char you ,char comp)
{
    if(you==comp){
        return -1;
    }
    
    if(you=='s'){
        if(comp=='w'){
            return 1;
        }else{
            return 0;
        }
    }
    if(you=='w'){
        if(comp=='g'){
            return 1;
        }else{
            return 0;
        }
    }
    
    if(you=='g'){
        if(comp=='w'){
            return 0;
        }else{
            return 1;
        }    
    }
}



int main()
{
    char you;
    char comp;
    cout << "computer turn : snake(s),water(w) or gun(g)" << endl;
    cout << "your turn : choose snake(s),water(w) or gun(g)"<<endl;
    cin >> you;
    

    int number=rand()%100;
    if(you=='s')
    {
       if(number<50)
       {
           comp='w';
       }else{
           comp='g';
       }
    }
    else if(you=='w')
    {
        if(number>50)
        {
            comp='g';
        }else{
            comp='s';
        }
    }
    else if(you=='g'){
        if(number>50){
            comp='w';
        }else{
            comp='s';
        }
    }


    cout<<"computer choose : "<<comp<<endl;
    cout<<"you choose : "<<you<<endl;
    int result =gamewin(you,comp);
    if(result==1)
    {
        cout<<"you won"<<endl;
    }else if(result==-1)
    {
        cout<<"game draw"<<endl;
            }
    else 
    {
        cout<<"you loose"<<endl;
    }

  return 0;
  
}