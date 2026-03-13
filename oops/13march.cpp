/*
operator overloading : means giving special meaning to operators for user defined objects

+ - * /  == > <  ++ -- 
 syntax : 

 return_type operator symbol (parameter)
 {
  //code 
 }
*/

// ex :1 
/*
#include <iostream>
using namespace std;
class number 
{
    int x; 
    public : 
        number(int a)
        {
            x=a;
        }
    number operator +(number obj)
    {
         number temp(0); 
         temp .x = x +obj.x;
         return temp ; 
    } 
    void display()
    {
        cout<<"value of x is : "<<x<<endl;
    }
};
int main()
{
    number n1(10) ;
    number n2(20) ;

    number n3 = n1 + n2 ;

    n3.display(); 
    return 0 ;
}
*/

// ex :2 real life example  : 

/*
complex number  :  23 + 8i ==> real part : 23   immaginary part : 8i 
                   90 +10i 
*/

#include <iostream>
using namespace std;
class Complex 
{
    public : 
        int real; 
        int immaginary;
    Complex(int r, int i)
    {
        real=r;
        immaginary=i;
    }
    Complex operator +(Complex obj)
    {
        Complex temp(0,0);
        temp.real = real + obj.real;
        temp.immaginary = immaginary + obj.immaginary;
        return temp;
    }
    void display()
    {
        cout<<"real :"<<real<<" immaginary :"<<immaginary<<endl;
    }
};
int main()
{
    Complex c1(23,8);
    Complex c2(90,10);

    Complex c3 = c1 + c2;

    c3.display(); 

    return 0 ; 


}