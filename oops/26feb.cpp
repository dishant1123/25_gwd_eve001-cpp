/*
constructor  : automatically called when  object is  created. 

type  : 
1. default  constructor
2. parameterized  constructor
3. non  parameterized  constructor
4. copy  constructor
5. constructor  overloading 

rules  : 
1. class name = constructor  name  
2. no return type 

*/

// ex :1 default  constructor
/*
#include<iostream>
using namespace std;
class student 
{
    public : 
        student()
        {
            cout<<"default  constructor called"<<endl;
        }
};
int main()
{
    student s1; 
    return 0; 
}
*/ 

// ex :2  non  parameterized  constructor
/*
#include<iostream>
using namespace std;
class student 
{
    public : 
        int  rollno;
        string name; 
    student()
    {
        rollno =1; 
        name ="trisha";
        cout<<"non  parameterized  constructor called"<<endl;
    }
    void show()
    {
        cout<<"rollno is  : "<<rollno<<endl;
        cout<<"name is  : "<<name<<endl;
    }
};
int main()
{
    student s1; 
    s1.show(); 
    cout<<"rollno is  : "<<s1.rollno<<endl;
    cout<<"name is  : "<<s1.name<<endl;
    return 0; 
}
*/
// ex : 3  parameterized  constructor
/*
#include<iostream>
using namespace std;
class student 
{
    public : 
            int  rollno ; 
            string name; 
    
    student(int  r , string n )  // string name , int rollno  
    {
        rollno =r; 
        name =n; 
    }
    void show()
    {
        cout<<"rollno is  : "<<rollno<<endl;
        cout<<"name is  : "<<name<<endl;
    }
};
int main()
{
    student s1(12,"trisha");
    s1.show(); 
    return 0;
}
*/ 

// ex :4 copy  constructor
/*
#include<iostream>
using namespace std;
class student 
{
    public : 
        int  rollno; 
        string name; 
    student(int  r , string n )
    {
        rollno =r;
        name =n;
    }
    student(const student &s)
    {
        rollno =s.rollno; 
        name =s.name;
        cout<<"copy  constructor called"<<endl;
    }
    void  show()
    {
        cout<<"rollno is  : "<<rollno<<endl;
        cout<<"name is  : "<<name<<endl;
    }

};

int main()
{
    student s1(12,"trisha");  // s2=s1 
    student s2(s1); 
    s2.show(); 
    cout<<"rollno is  : "<<s2.rollno<<endl;
    cout<<"name is  : "<<s2.name<<endl;
    
    s2.name ="yash";
    s2.rollno =100;

    s2.show(); 
    s1.show(); 
    return 0; 

}
*/
/*
s1=s2   ==> s1 change  ==> 2 change 
strcpy(s1.name,s2.name);  ==> s1 change  ==> s1 change 

*/

// ex :5 constructor  overloading

#include<iostream>
using namespace std;
class student 
{
    public : 
        int  rollno ; 
        string name;
    student()
    {
        cout<<"default  constructor called"<<endl;
    }
    student(string n)
    {
        name =n; 
        rollno =1; 
    }
    student(int  r , string n)
    {
        name =n;
        rollno =r;
    }
    void show()
    {
        cout<<"rollno is  : "<<rollno<<endl;
        cout<<"name is  : "<<name<<endl;
    }
};
int main()
{
    student s1;
    student s2("yash"); 
    s2.show(); 
    
    student s3(100,"trisha");
    s3.show(); 

    return 0; 
}