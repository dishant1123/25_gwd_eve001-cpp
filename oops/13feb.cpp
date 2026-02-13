//ex :1 
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        int  rollno; 
        string  name; 
    void  input()
    {
        cin>>rollno>>name;
    }
    void  show()
    {
        cout<<"rollno:"<<rollno<<" name:"<<name<<endl;
    }
};
int main()
{
    student s1; 
    s1.input();  //  rollno : 2   name : javed 
    s1.show();   //  2  javed 

    s1.name = "yash"; 
    s1.rollno = 100; 

    s1.show(); // 
    return 0; 

}
*/

// ex :2  private  : 

/*
accessible  only within the class not  outside the  class .
*/
/*
#include<iostream> 
using namespace std;
class student 
{
    private : 
        string  name="trisha" ;   // by default  if you don't declare  then  its private. 
        int age=19; 
    
    public : 
        void show()
        {
            cout<<"name is  : "<<name<<endl;
            cout<<"age is  : "<<age<<endl;
        }
};
int main()
{
    student s1; 
    // cout<<"name is  : "<<s1.name<<endl; not  accessible bcz if  private 
    // cout<<"age is  : "<<s1.age<<endl;

    // s1.name ="bhavya";  // not  update  in private. 
    // s1.age =20;
    s1.show(); 

    return 0; 
}
*/


// protected : 
/*
accessible  only within the class also  sub class  .
*/
/*
#include<iostream>
using namespace std;
class vehicle 
{
    protected : 
        string model="toyota";
        int year = 2000; 
    // public : 
    //     void  show()
    //     {
    //         cout<<"model is  : "<<model<<endl;
    //         cout<<"year is  : "<<year<<endl;
    //     }
};
class car : public vehicle 
{
     public : 
        //  string  model ="BMW"; 
    //     int  year =2005; 
        
        void show()
        {
            // vehicle ::show();
            cout<<"model is  : "<<model<<endl;
            cout<<"year is  : "<<year<<endl;
        }
}; 
int main()
{
    car c1; 
    c1.show(); 
    return 0; 
}

*/

// ex :3   bank  class  object 

#include<iostream>
using namespace std; 

class bank 
{
    public : 
        string name = "Trisha"; 
        int  balance =20000; 
    void deposit (int  amt)
    {
        balance += amt;
        cout<<"deposited  : "<<amt<<endl;
    }
    void  withdraw (int  amt)
    {
        if(balance -amt >=10000)
        {
            balance -=amt; 
            cout<<"withdrawed  : "<<amt<<endl;
        }
        else 
        {
            cout<<"min 10000 rs required"<<endl;
        }
    }
    void check()
    {
        cout<<"balance is  : "<<balance<<endl;
    }
    void info()
    {
        cout<<"cutomer information"<<endl;
        cout<<"name is  : "<<name<<endl;
        cout<<"balance is  : "<<balance<<endl;
    }
}; 

int main()
{
    bank b1; 
    b1.info(); 
    b1.deposit(10000); 
    b1.withdraw(18000);
    b1.check();
    return 0; 
}

/*
task :1 if  user  enter depsoit  or  withdraw ask to enter the  pin  if its is  verify then only you one deposit or withdraw.   
*/