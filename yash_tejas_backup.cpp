/*
c++ /cpp :  object oriented programming

#include<stdio.h>
#include<conio.h>
void main()
{
}

cpp ==> print ==> cout<<      ==> left shift 
        scan ==> cin>>         ==> right shift
cout , cin  ==> iostream 

*/
/*
#include<iostream>
using namespace std; // std : standard library  ==>  namespace  ==>container 
int main()
{
    cout<<"hello world"<<endl;
    return 0; 
}


#include<iostream>
int main()
{
    int a; 
    std ::cout<<"hello world\n";
    std ::cout<<"ram\n";
    std ::cout<<"sita";
    std ::cin>>a; 
    std::cout<<"a value is  : "<<a; 
    return 0; 
}
    */

/*
data type  : 

1. int  : pos or neg 
2. float  : decimal pos or neg
3. char / string  : single character or string
4. long int : pos or neg exceeding limit of int  
5. bool : true or false
6. double : decimal pos or neg 
*/

#include<iostream>
using namespace std;
int main()
{
    int a; 
    float b=78.67; 
    char c='a';
    long int d=1000000; 
    double e=123330.67709067;
    bool f =true; 

    cout<<"enter a value :";
    cin>>a; 

    cout<<"a value is : "<<a<<endl;
    cout<<"b value is : "<<b<<endl;
    cout<<"c value is : "<<c<<endl;
    cout<<"d value is : "<<d<<endl;
    cout<<"e value is : "<<e<<endl;
    cout<<"f value is : "<<f<<endl;
    return 0; 
}