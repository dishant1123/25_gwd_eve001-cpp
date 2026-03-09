/*
friend function  : it is  not  a member of a class but it can access the private and  protected  member of class. 

normally : 
    private members : accessible  only within the class. 
    protetced members  :accessible  only within the class and  derived classes.

but if we declare a function as friend then it can access then directly. 

syntax : 

class a 
{
    private :
        int data; 
    public : 
        friend void function_name(class_name obj); 
    
}; 

*/

// ex :1 

/*
#include <iostream>
using namespace std;
class demo 
{
    private : 
        int  num; 
    public : 
        demo()
        {
            num =10; 
        }
    friend void  show(demo d); 
};
void show(demo d)
{
    cout<<"num is  : "<<d.num<<endl;
}

int  main()
{
    demo d; 
    show(d);
    return 0;
}
*/

// ex :2 friend function to add two  objects  

#include <iostream>
using namespace std;
class number 
{
    private : 
        int a; 
    public : 
        number(int x)
        {
            a=x; 
        }
    friend void add(number n1, number n2 );
};

void add(number n1, number  n2)
{
    cout<<"sum is  : "<<n1.a + n2.a<<endl;
}
int main()
{
    number  n1(10); 
    number  n2(20); 

    add(n1,n2); 
    return 0; 
}