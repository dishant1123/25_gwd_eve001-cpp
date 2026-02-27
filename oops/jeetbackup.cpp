/*
opps : object  oriented programming  

access control / specifier : 

1. public  : accessible from anywhere
2. private : accessible only from the same class / within  in class 
3. protected : accessible only from the same class / within  in class and from sub-class 


pillar  4  : 

1. inheritance  : 5 type  ==> single , multiple , multi level , hirearchy , hybrid  ==> diamond  ==> virtual function
2. polymorphism : 2 ==> 1. method overloading - complie time , 2. method overriding - run time 
3. encapsulation : 2 ==> 1 . get  method  2. set method 
4. abstraction  : 2. 1. abstract class  2. pure virtual function - interface 
*/

// ex :1  public : 
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        int  rollno;
        string name;
        //int rollno=1;
        //string name="tejas";
    void input()
    {
        cout<<"enter rollno : ";
        cin>>rollno;
        cout<<"enter name : ";
        cin>>name;
    }
    void  show()
    {
        cout<<"rollno is  : "<<rollno<<endl;
        cout<<"name is : "<<name<<endl;
    }
};
int main()
{
    student s1;

    // cout<<"rollno is  : "<<s1.rollno<<endl;
    // cout<<"name is : "<<s1.name<<endl;
    s1.input();  // name = tejas rollno =1 
    s1.show();   // t 1 

    s1.name ="aman"; 
    s1.rollno=1;

    s1.show(); 
    return 0; 
}
*/ 

// ex :2 private :
/*
#include <iostream>
using namespace std;
class student
{
    private :
        int  rollno =1 ;
        string name="tejas";
    // public : 
        // void  show()
        // {
        //     cout<<"rollno is  : "<<rollno<<endl;
        //     cout<<"name is : "<<name<<endl;
        // }
    public : 
        void display()
        {
            name ="aman";
            rollno=1;
            cout<<"rollno is  : "<<rollno<<endl;
            cout<<"name is : "<<name<<endl;
            // show(); 
        }
};
int main()
{
        student s1; 
        // cout<<"rollno is  : "<<s1.rollno<<endl; // not  accessible outside the class bcz  of  private 
        // cout<<"name is : "<<s1.name<<endl;
        // s1.show(); 
        s1.display(); 
       
        return 0; 
}
*/

// ex :3  protected 
/*
#include <iostream>
using namespace std;
class student 
{
    protected :
        int  rollno =1 ;
        string name="tejas";
};
class teacher : public student 
{
    public :
        void show()
        {
            cout<<"rollno is  : "<<rollno<<endl;
            cout<<"name is : "<<name<<endl;
        }
};
int main()
{
    teacher t1; 
    t1.show();
    
    return 0; 
}
*/

// ex :4  by default  all member are private . 
/*

#include <iostream>
using namespace std;
class student 
{
    string name  ="manav"; 
    int rollno=1;

    public : 
        void show()
        {
            cout<<"rollno is  : "<<rollno<<endl;
            cout<<"name is : "<<name<<endl;
        }
}; 

int main()
{
    student s1; 
    // cout<<"rollno is  : "<<s1.rollno<<endl;
    // cout<<"name is : "<<s1.name<<endl;
    s1.show();
    return 0; 
}

*/ 

#include <iostream>
using namespace std;
class bank 
{
    public : 
        string name ="manav";
        int accno = 1234556; 
        string bank = "HDFC"; 
        int balance =50000; 

    void deposit(int amt)
    {
        balance+=amt;
        cout<<"deposit amt  is  : "<<amt<<endl;
    }
    void withdraw(int amt) // balance  =60000   withdraw amt =5500 
    {
        if(balance -amt >=10000)  //  60000 - 5500 > =10000 
        {
            balance-=amt;
            cout<<"withdraw amt  is  : "<<amt<<endl;
        }
        else 
        {
            cout<<"min balance required is  : 10000"<<endl;
        }
    }
    void check_balance()
    {
        cout<<"balance is  : "<<balance<<endl;
    }
    void info()
    {
        cout<<"CUTOMER BANAKING DETAILS"<<endl;
        cout<<"name is  : "<<name<<endl;
        cout<<"account no is  : "<<accno<<endl;
        cout<<"branch is  : "<<bank<<endl;
    }
};
int main()
{
    bank b1;
    b1.info(); 
    b1.deposit(10000); 
    b1.withdraw(28000); 
    b1.check_balance();
    return 0; 
}

/*
task :1 pin generate  ===> deposit  , withdraw == >ask your to enter the pin  ==> verify pin ==> deposit ==> withdraw
*/