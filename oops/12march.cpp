/*
menu driven  + array  + inheritance  + friend +encapsualtion  : 

*/

/*
#include <iostream>
using namespace std;
class person 
{
    private : 
        int age;   // encapsulation   ==> get ==> print  , set ==> modify  ==> private 
        
    public : 
        string name; 

        void setperson(string n, int a)
        {
            name =n; 
            age =a;
        }
        int get_age()
        {
            return age;
        }
        friend void display(person p);
};
class student : public person 
{
    private : 
        int marks; 
    public : 
        void setstudent(string n, int a, int m)
        {
            setperson(n,a); 
            marks =m; 
        }
        void showstudents()
        {
            cout<<"name is  : "<<name<<endl;
            cout<<"age is  : "<<get_age()<<endl;
            cout<<"marks is  : "<<marks<<endl;
        }
};
void display(person p)
{
    cout<<"friend function access : \n"; 
    cout<<"name is  : "<<p.name<<endl;
    cout<<"age is  : "<<p.get_age()<<endl;
}


int main()
{
    student s[3];  // array of  object 
    int  choice;
    int  i=0;
    string name; 
    int age, marks; 
    
    do
    {
        cout<<"menu \n";
        cout<<"1.add student \n";
        cout<<"2.display student \n";
        cout<<"3. friends function display \n";
        cout<<"4.exit \n";
        cout<<"enter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1 :
            if(i<3)
            {
                cout<<"enter name : ";
                cin>>name;
                cout<<"enter age : ";
                cin>>age;
                cout<<"enter marks : ";
                cin>>marks;
                s[i].setstudent(name,age,marks);
                i++;
            }
            else 
            {
                cout<<"no more space left \n";
            }
            break;
            case 2 : 
                for(int j=0; j<i; j++)
                {
                    cout<<"student "<<j+1<<" details \n";
                    s[j].showstudents(); 
                }
                break;
            case 3: 
                if(i>0)
                {
                    for(int j=0; j<i; j++)
                    {
                        display(s[j]);
                    }
                }
                else 
                {
                    cout<<"no student found \n";
                }
            case 4 :
                cout<<"exiting \n";
                break;
            default :
                cout<<"invalid choice \n";
                break;
        }
    } while (choice!=4);
    return 0 ;
}
*/

/*
polymorphism  : many forms  

1. complie time polymorphism  : same function  name  but different  parameters
    a. function  obverloading  b. constructor  overloading c. operator overloading

2. run time polymorphism  :   same  function  same parameter  ==> virtual function
*/


// ex : 1 complie time polymorphism : function overloading
/*
#include <iostream>
using namespace std; 
class Math 
{
    public :
        int add(int a, int b)
        {
            return a+b;
        } 
        int add(int a, int b, int c)
        {
            return a+b+c;
        }
        int add(int a)
        {
            return a; 
        }
        
};
int  main()
{
    Math m;

    cout<<"addition of  two numbers : "<<m.add(10,20)<<endl;
    cout<<"addition of  thre numbers : "<<m.add(10,45,20)<<endl;
    cout<<"only one arg pass : "<<m.add(10)<<endl;

    return 0 ;
}
*/

/*
option a . error  b . 2 function call  c. first function call d.all 
*/

//  ex :1 run time polymorphism :  without using  virtual  function  
/*
#include <iostream>
using namespace std;
class animal
{
    public : 
        void sound()
        {
            cout<<"animal sound \n";
        }
};
class dog : public animal 
{
    public : 
        void sound()
        {
            cout<<"dog sound \n";
        }
}; 
class cat : public animal
{
    public : 
        void sound()
        {
            cout<<"cat sound \n";
        }
};
int main()
{
    animal *a; 
    dog d; 
    cat c ; 
    
    a=&d; 
    a=&c; 
   
    a->sound(); 
    a->sound(); 
    return 0; 
}
*/

// with using virtual function

#include <iostream>
using namespace std;
class animal
{
    public : 
        virtual void sound()
        {
            cout<<"animal sound \n";
        }
};
class dog : public animal 
{
    public : 
        void sound()
        {
            cout<<"dog sound \n";
        }
}; 
class cat : public animal
{
    public : 
        void sound()
        {
            cout<<"cat sound \n";
        }
};
int main()
{
    animal *a; 
    dog d; 
    cat c ; 
    
    a=&d; 
  
    a->sound(); 
    a=&c; 
    a->sound(); 
    return 0; 
}