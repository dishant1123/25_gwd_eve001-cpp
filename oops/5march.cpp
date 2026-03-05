/*
hirechy inheritance  : multiple derivred class inherit  form same base class. 

class a 
class b : public a 
class c : public a 
class d : public a 
*/

// hybrid inheritance  : its combination of  more than  one  inheritance. 
/*
generally it is  combination  of  multiple  and  multi level inheritance. 

multiple  :                                 multi level : 

class a                                     class a 
class b :                                   class b : public a 
class c : public a , public b               class c : public b 


                person 
                /    \
             student teacher 
               \     / 
                result 
*/
/*
#include <iostream>
using namespace std;
class person 
{
    protected : 
        string  name; 
    private :
        int  age; 
    public : 
        person(string n="",int a=0)
        {
            name =n; 
            age =a; 
            cout<<"person constructor called"<<endl;
        }
        void person_show()
        {
            cout<<"name is  : "<<name<<endl;
            cout<<"age is  : "<<age<<endl;
        }
};
class student : public person 
{
    protected : 
        int rollno; 
    public : 
        student(string n="",int a=0,int  r=0) :person(n,a)
        {
            rollno =r; 
            cout<<"student constructor called"<<endl;
        }
};
class teacher : public person 
{
    protected : 
        string  subject; 
    public : 
        teacher(string n="",int a=0, string s=""):person(n,a)
        {
            subject =s;
            cout<<"teacher constructor called"<<endl;
        }
};
class result : public student , public teacher
{
    private : 
        int marks; 
    public : 
        result(string n, int a, int r,string s,int m):student(n,a,r),teacher(n,a,s)
        {
            marks =m; 
        }
        void display()
        {
            cout<<"---------RESULT INFORMATION---------"<<endl;
            student ::person_show(); 
            cout<<"rollno is : "<<rollno<<endl;
            cout<<"subject is : "<<subject<<endl;
            cout<<"marks is : "<<marks<<endl;
        }
};
int main()
{
    result r1("trisha",19,12,"maths",78); 
    r1.display();
    return 0; 
}
*/ 
/*
void add(int a, int b =50)
{
    cout<<"sum is  : "<<a+b<<endl;
}
int main()
{
    add(40);
    add(12,15); 
    return 0;
}
*/

/*
method  overriding  : 

class animal 
     void  sound()
class dog : public animal
    virtual void sound() 
class cat : public animal
    void  sound()
*/

/*
virtual inheritance  : 


1. virtual  function  : polymorphism  ==> runtime  polymorphism
2. virtual inheritance  : use to slove the  diamond problem 

syntax : 
1. virtual keyword 

*/

#include <iostream>
using namespace std;
class person 
{
    protected : 
        string  name; 
    private :
        int  age; 
    public : 
        person(string n="",int a=0)
        {
            name =n; 
            age =a; 
            cout<<"person constructor called"<<endl;
        }
        void person_show()
        {
            cout<<"name is  : "<<name<<endl;
            cout<<"age is  : "<<age<<endl;
        }
};
class student :virtual public person 
{
    protected : 
        int rollno; 
    public : 
        student(int  r=0)
        {
            rollno =r; 
            cout<<"student constructor called"<<endl;
        }
};
class teacher : virtual public person 
{
    protected : 
        string  subject; 
    public : 
        teacher(string s="")
        {
            subject =s;
            cout<<"teacher constructor called"<<endl;
        }
};
class result : public student , public teacher
{
    private : 
        int marks; 
    public : 
        result(string n, int a, int r,string s,int m):student(r),teacher(s),person(n,a)
        {
            marks =m; 
        }
        void display()
        {
            cout<<"---------RESULT INFORMATION---------"<<endl;
            student ::person_show(); 
            cout<<"rollno is : "<<rollno<<endl;
            cout<<"subject is : "<<subject<<endl;
            cout<<"marks is : "<<marks<<endl;
        }
};
int main()
{
    result r1("trisha",19,12,"maths",78); 
    r1.display();
    return 0; 
}