//nesting of member fuction

#include<iostream>
using namespace std;

class binary
{
    private:
    string s;
    void chk_bin(void);

    public:
    void read(void);
    void once_compliment(void);
    void display(void);
    
};

void binary::read(void)
{
    cout<<"enter the binary number "<<endl;
    cin>>s;
}

void binary::chk_bin(void)
{
    for(int i=0;i<s.length();i++)
     {
        if(s.at(i) != '0' && s.at(i) != '1')
        {
            cout<<"this is incorrect binary number "<<endl;
            exit(0);
        }

     }

}
void binary::once_compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
       else
        {
            s.at(i) = '0';
        }
    }
}
void binary::display(void)
{
    cout<<"displaying your binary "<<endl;
     for(int i=0;i<s.length();i++)
     {
        cout<<s.at(i);

     }

     cout<<endl;
}
int main()
{

    binary b;
    b.read();
    b.display();
    b.once_compliment();
    b.display();

    return 0;

}