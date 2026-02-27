/*
inheritance  : means  to inherit  the  properties  of  a  class  to  another  class

1. single level inheritance 
2. multiple  inheritance
3. multi level inheritance
4. hirearchy
5. hybrid
*/

//ex :1  single  level inheritance
/*
#include <iostream>
using namespace std;
class student 
{
    public :
        int  rollno; 
        string name; 

    student(int rollno , string name)
    {
        this->name =name ; 
        this->rollno =rollno ;
    }
    
};
class teacher : public student 
{
    public :
        string subject ; 
    teacher(string name ,int  rollno , string  subject):student(rollno,name) // base class constructor
    {
        this->subject =subject ;
    }
    void show()
    {
        cout<<"rollno is  : "<<rollno<<endl;
        cout<<"name is : "<<name<<endl;
        cout<<"subject is : "<<subject<<endl;
    }
};
int  main()
{
    teacher t1("manav",12,"java");
    t1.show(); 
    return 0;  
}
*/
//ex :2 
/*
#include <iostream>
using namespace std;
class student 
{
    public :
        int  rollno; 
        string name; 

    student()
    {
        name ="trisha" ; 
        rollno =1 ;
    }
};
class teacher : private student 
{
    public :
        string subject ; 
    teacher(string  subject)
    {
        this->subject =subject ;
    }
    void show()
    {
        cout<<"rollno is  : "<<rollno<<endl;
        cout<<"name is : "<<name<<endl;
        cout<<"subject is : "<<subject<<endl;
    }
};
int  main()
{
    teacher t1("java");
    // cout<<"rollno is  : "<<t1.rollno<<endl;
    // cout<<"name is : "<<t1.name<<endl;
    
    t1.show(); 

    return 0;  
}
*/ 

// ex :3  multiple  inheritance
/*

class a 
class b 
class c : public a , public b 
*/
