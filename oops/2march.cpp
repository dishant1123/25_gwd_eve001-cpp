/*
multiple inheritance  : 

class a 
class b 
class c : public a, public b 
*/

//ex :1
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        int  rollno; 
        string name; 
    student(string n,int r)//parameterized constructor
    {
        name =n; 
        rollno =r ;
    }
};
class professor 
{
    public : 
        string subject ;
    professor() // non parameterized constructor
    {
        subject ="python" ;
    }
};
class clg : public student , public professor
{
    public :
        string clg_name; 
        clg(string n,int r ,string cn) : student(n,r),professor()
        {
            clg_name =cn; 
        }
    void show() //
    {
        cout<<"CLG INFORMATION"<<endl;
        cout<<"Clg name is  : "<<clg_name<<endl;
        cout<<"Professor subject is  : "<<subject<<endl;
        cout<<"Student rollno is  : "<<rollno<<endl;
        cout<<"Student name is  : "<<name<<endl;
    }
};
int main()
{
    clg c1("trisha",14,"SAL");
    c1.show(); 
    return 0; 
}
*/

// ex :2  protected  : 
/*
#include <iostream>
using namespace std;
class student 
{
    protected : 
        int rollno ; 
        string name; 
    public : 
        student()
        {
            name= "yash"; 
            rollno =1 ;
        }
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

// ex :3
/*
multi level inheritance  : 

class a 
class b : public a    ===> b ==>a 
class c : public b    ===>  c ==> a,b 
*/ 

#include <iostream>
using namespace std;
class employees 
{
    private : 
        int emp_id; 
    protected :
        string emp_name; 
    
    public : 
        employees(int id , string n )
        {
            cout<<"employees constructor called"<<endl;
            emp_id =id; 
            emp_name =n;
        }
        void show_id()
        {
            cout<<"employee id is  : "<<emp_id<<endl;
        }
};
class manager : public employees
{
    protected :
        string department; 
    public :
        manager(int id, string n,string d) :employees(id,n)
        {
            cout<<"manager constructor called"<<endl;
            department =d;
        }
};
class director : public manager 
{
    private : 
        double salary; 
    public : 
        director(int id,string n,string d,double s ) : manager(id,n,d)
        {
            cout<<"director constructor called"<<endl;
            salary =s;
        }
    void display()
    {
        show_id(); 
        cout<<"name is  : "<<emp_name<<endl;
        cout<<"manager department is  : "<<department<<endl;
        cout<<"director salary is  : "<<salary<<endl;
    }
};
int main()
{
    director d1(101,"trisha_pink","reasearch",500000); 
    d1.display();
       
    return 0; 
}
