/*
template  : template allows to write a generic function that works with different data types without rewriting the code. 

*/

// ex :1 
/*
#include <iostream>
using namespace std;
template <typename rohit>
rohit add(rohit a, rohit b)
{
    return a+b; 
}

int main()
{
    cout<<"sum of 2 number : "<<add(10,20)<<endl;
    cout<<"sum of 2 number : "<<add(10.67,20.34)<<endl;
    // cout<<"sum of 2 number : "<<add('A',1)<<endl;
    cout<<"sum of 2 number : "<<add('A','B')<<endl;
    //cout<<"sum of 2 number : "<<add(10,20.67)<<endl;

    return 0; 
}
*/ 

// ex :2  class template

/*
#include <iostream>
using namespace std;
template <class T>

class calculator 
{
    T a,b; 

    public : 
        calculator(T x, T y)
        {
            a=x; 
            b=y;
        }
    void display()
    {
        cout<<"sum of 2 numbers : "<<a+b<<endl;
        cout<<"difference of 2 numbers : "<<a-b<<endl;
        cout<<"product of 2 numbers : "<<a*b<<endl;
        cout<<"quotient of 2 numbers : "<<a/b<<endl;
    }
}; 
int main()
{
    calculator<int> c1(10,20); 
    c1.display(); 

    calculator<float> c2(10.67,20.34);
    c2.display();

    return 0; 
}
*/ 

// ex :3 default  value  pass in template

#include <iostream>
using namespace std;
template <class T =int>

class demo 
{
    T value; 
    public : 
        demo (T x)
        {
            value=x;
        }
    void show()
    {
        cout<<"value of demo is : "<<value<<endl;
    }
};

int main()
{
    demo<> d1(90); 
    d1.show();

    demo<float> d2(90.67);
    d2.show();
    return 0 ;
}