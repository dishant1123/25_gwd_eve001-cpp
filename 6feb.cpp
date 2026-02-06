/*
pointer : 

use : 
1. memory save / address store 
2. array  manupulation  easy using  pointer . 
3. dymanic memory allocation  
4. passing varibales by reference  pointer.  
*/

// ex :1 
/*
#include<iostream>
using  namespace  std; 
int main()
{
    int a =10; 
    int *p; // pointer  decalration
    p =&a;  // pointer  intialization
    // int  *p =&a;  // pointer decalration  with  initialisation

    cout<<"a value is  : "<<a<<endl; // 10 
    cout<<"pointer  value is  : "<<*p<<endl; // 10 
    cout<<"address of  a is  : "<<p<<endl;  // 
    cout<<"address of  a is  : "<<&a<<endl;  //
    return 0; 

}
*/ 

// pointer  with array : 
/*
#include<iostream>
using  namespace  std;
int main()
{
    int  a[5] = {1,2,3,4,5};
    int *p =a; // int  *p =&a ; 

    cout<<"value  of 3 is  : " << a[3]<<endl; 
    cout<<"using  pointer  :"<<*(p+3)<<endl; 

    for(int i=0; i<5; i++)
    {
        cout<<*(p+i)<<" ";
    }
    return 0 ;

}

*/ 

// dymanic memory allocation :
/*
    memory allocated at runtime(not  compile time.)
    store memory  in  heap . 
    new  , delete
*/
/*
#include<iostream>
using  namespace std; 
int main()
{ 
    int *p = new  int ; // dynamic  memory allocation  
    *p =50 ;

    cout<<"value of  p is  : "<<*p<<endl;

    delete p; // delete  memory
    return 0 ; 

}
*/
// malloc :  memory allocation
/*
#include<iostream>
using  namespace std;
int main()
{
    int *p = (int *) malloc(sizeof(int)); 

    *p =100; 
    cout<<"value of  p is  : "<<*p<<endl;

    free(p); // free  memory
    return 0; 
}
*/
// double  pointer  : 
/*
#include<iostream>
using namespace std;
int main()
{
    int  x=100 ; 
    int  *p = &x;  // pointer declaration with initialisation 
    // p = &x
    int  **pp = &p; // double pointer declaration with initialisation
    // pp = &p
    
    cout<<"value of x is  : "<<x<<endl; // 100 ;
    cout<<"x value using  pointer  : "<<*p<<endl; // 100 ;
    cout<<"x value using  double  pointer  : "<<**pp<<endl; 
    cout<<"address of  x is  : "<<p<<endl; //  single  pointer   ==> x memory  address
    cout<<"address of   double  pointer is  : "<<pp <<endl; // 
    return 0;
}
*/ 

// modify pointer using function  : 

#include<iostream>
using namespace std; 
void update(int  **p)
{
    **p =99; 
}
int main()
{
    int  x =10 ;
    int  *p = &x; 

    update(&p);
    cout<<"value of  x is  : "<<x<<endl;
    return 0; 

}