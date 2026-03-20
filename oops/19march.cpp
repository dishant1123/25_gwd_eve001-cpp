/*
abtraction  : means  hiding implementation details and showing  only the essential features  of the user. 
2 ways  : 

1. using classes (access specifier)
2. using  abstracting classses (pure virtual functions)

pure virtual function : 

1.no  implementation in base class .
declared using =0.

class a 
class b : virtual  public b 

========

class a 
    public : 
        virtual void sound()
        {
            cout<<
        }
class b : public a 
    public :
        void sound()
        {
            cout<< 
        }
============

class a 
    public : 
        virtual void  sound () =0  ; 

class b : public a 
*/

// ex :1 : 
/*
#include <iostream>
using namespace std;
class shape
{
    public : 
        virtual void area() =0 ;
};
class circle : public shape 
{
    public : 
        void area()
        {
            cout<<"area of circle is : 3.14*r*r"<<endl;
        }
};
class rectangle : public shape
{
    public : 
        void area()
        {
            cout<<"area of rectangle is : l*w"<<endl;
        }
};
class square : public shape 
{
    public : 
        void area()
        {
            cout<<"area of square is : l*l"<<endl;
        }
};
int  main()
{
    shape *s ; 

    circle c ; 
    rectangle r ;
    square s1 ;

    s= &c; 
    s->area();

    s=&r;
    s->area();

    s=&s1;
    s->area();
    return 0 ; 
}
*/

// ex :2 : 

#include <iostream>
using namespace std; 
class bankaccount 
{
    protected : 
        string  name ; 
        int accno; 
        float balance ;
    public : 
        bankaccount(string n , int a ,  float b)
        {
            name =n; 
            accno=a;
            balance=b;
        }
    virtual void cal_interest()=0; 

    void display()
    {
        cout<<"name : "<<name<<endl;
        cout<<"account no : "<<accno<<endl;
        cout<<"balance : "<<balance<<endl;
    }
};

class savingaccount : public bankaccount
{
    public : 
        savingaccount(string n , int a ,  float b) :bankaccount(n,a,b)
        {
        }
    void cal_interest()
    {
        int  interest = balance * 0.08; 
        cout<<"saving account interest with  8 % : "<<interest<<endl;
    }
};
class currentaccount : public bankaccount
{
    public : 
        currentaccount(string n , int a ,  float b) :bankaccount(n,a,b)
        {
        }
    void cal_interest()
    {
        int  interest = balance * 0.04; 
        cout<<"current account interest with  4 % : "<<interest<<endl;
    }
};
class fixdeposit : public bankaccount
{
    public : 
        fixdeposit(string n , int a ,  float b) :bankaccount(n,a,b)
        {
        }
    void cal_interest()
    {
        int  interest = balance * 0.1;
        cout<<"fix deposit account interest with  10 % : "<<interest<<endl;
    }
};
int main()
{
    int  choice ; 
    int  accno; 
    string name; 
    float balance;

    do{
        cout<<"MENU"<<endl;
        cout<<"1.saving account"<<endl;
        cout<<"2.current account"<<endl;
        cout<<"3.fix deposit account"<<endl;
        cout<<"4.exit"<<endl;
        cout<<"enter your choice : ";
        cin>>choice;

        if(choice  >=1 && choice <=3)
        {
            cout<<"enter name : ";
            cin>>name;
            cout<<"enter account no : ";
            cin>>accno;
            cout<<"enter balance : ";
            cin>>balance;
        }
        bankaccount *b; 
        switch(choice)
        {
            case 1 : 
            {
                savingaccount s(name,accno,balance);
                b=&s;
                b->display();
                b->cal_interest();
                break;
            }
            case 2 : 
            {
                currentaccount c(name,accno,balance);
                b=&c;
                b->display();
                b->cal_interest();
                break;
            }
            case 3 : 
            {
                fixdeposit f (name,accno,balance);
                b=&f;
                b->display();
                b->cal_interest();
                break;
            }
            case 4 : 
            {
                cout<<"thanks for using this program"<<endl;
                break;
            }
            default : 
            {
                cout<<"invalid choice"<<endl;
            }

        }
    }while(choice !=4);
    return 0; 
}
/*

task :1 interest amt  added in to the balance. 
task :2 deposit  withdraw 
task :3 display  ==> choice  1  ==> 
*/

/*
next  session  : 

1. inventory  management : 4 oops  concepts  + friend function  
*/