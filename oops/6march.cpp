/*
encapsulation  : data and methods are wrapped together  inside  single  unit called zclass and direct access to data is  restircted to class only like  : 
1. public 
2. private
3. protected

use  :
1.data hiding ,bindning 
2. data security 
3. improved maintainability
4.better control and validation 

2 methods : 

1. get method : is used to retieve data from class. it return the value  not  modify the value.    
2  set method : is used to modify the value  of data in class. 
*/

// ex :1 

#include <iostream>
using namespace std;
class student 
{
    private : 
        string name = "trisha"; 
        int age =17; 
    public : 
        string get_name()
        {
            return name; 
        }
        int get_age()
        {
            return age;
        }
        /*int  set_age(int new_age) 
        {
            return age =new_age; 
        }
        string  set_name(string new_name)
        {
            name =new_name; 
        }
            */
           
        void set_age(int new_age)
        {
            age =new_age;
        }
        void set_name(string new_name)
        {
            name =new_name;
        }
};
int main()
{
    student s; 
    cout<<"before using set method "<<endl;

    cout<<"name is  : "<<s.get_name()<<endl;
    cout<<"age is  : "<<s.get_age()<<endl;

    cout<<"after  using  set method "<<endl;
    s.set_age(19);
    s.set_name("om"); 
    cout<<"name is  : "<<s.get_name()<<endl;
    cout<<"age is  : "<<s.get_age()<<endl;


    return 0; 
}