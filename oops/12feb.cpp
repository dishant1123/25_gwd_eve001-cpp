/*
next thrusday  : MCQ  ==> 25  marks    ==> passing  20  
     friday    : code  ==> 25 marks    ==> passing 15 
             total 6  que  : 
                1. que  compulsory  : 15 marks   ==> steps 
                2 . que 2,3,4,5,6  any  one  : 10 marks 
*/

// ex :1  structure  with  pointer  : 

// notes : try  to  access with *p  in structure  if any doubt  then reminder me  in next sess.
/*
#include<iostream>
using  namespace std; 
struct student  
{
    int  rollno; 
    string  name ; 
};

int main()
{
    student s1={1,"Trisha"}; 
    student s2={2,"manav"};

    student *p  =&s1;  // int  *p,    ===> p =&s;  
    student *q = &s2; 

    cout<<"rollno : "<<p->rollno<<"\n";
    cout<<"name : "<<p->name<<"\n";

    cout<<"rollno : "<<q->rollno<<"\n";// s1.rollno
    cout<<"name : "<<q->name<<"\n";

    return 0; 
}
*/ 

// ex :2  array structure  with  pointer  
/*
#include<iostream>
using namespace std;
struct student
{
    int  rollno; 
    string  name ;
}; 
int main()
{
    student s[3]; 

    student *p =s; 

    for(int i=0; i<3; i++)
    {
        cin>> (p+i)->rollno;           //cin >>s[i] .rollno ;   ==> *(p+i)
        cin>> (p+i)->name;             //cin >>s[i] .name ;     ==> *(p+i)
    }
    cout<<"student details\n";
    for(int i=0; i<3; i++)
    {
        cout<<"rollno  is  : "<<(p+i)->rollno<<"\n";
        cout<<"name  is  : "<<(p+i)->name<<"\n";
    }
    
    //int  a[5] ={1,2,3,4,5};   
    //int *p =a;
    
   return 0; 
}
*/ 

/*
oop  : 

class : blueprint  of  object 

object : instance  of  class 

class fruits : 
      apple mango   banana   chiku  

class type  : 

1. public : accessible  to  anywhere 
2. private : accessible  to  within class only 
3. protected : accessible  to  within class and sub class (inheritance)

4 pillar : 

1. inheritance 
2. encapsulation
3. abstraction
4. polymorphism
*/

//ex :1 

#include<iostream>
using namespace std;

class student  // student  class name 
{
    public :  
        string name="trisha";  // data member ==> name  , age 
        int age=18; 
    void  show()
    {
        cout<<"name is : "<<name<<"\n";
        cout<<"age is : "<<age<<"\n";
    }
};
int main()
{
    student s1;   // s1 object   of class student 
   // cout<<"name is : "<<s1.name<<endl ;
   // cout<<"age is : "<<s1.age<<endl ;
    s1.show(); 

    s1.name = "manav";
    s1.age = 20;

    s1.show(); 
    return 0; 
}