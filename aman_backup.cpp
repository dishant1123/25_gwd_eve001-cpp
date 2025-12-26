/*
cpp ==> object  oriented languges 

cout<<   ==> left shift 
cin >>  ==> right  shift 

=======================

data type  : 
1. int : pos or neg  ==> 32767  
2. float :decimal 
3. char / string  ==> single char,name 
4. long int : exceeding limit  of  int  
5. double  : decimal 
6. bool : true or false

======================
variable declaration rules : 

1. start special character , number , between special characters    
    ex : int @a=90 , int 12a=78 ,int a@a =78  
2. start character , end number  
    ex: int _a=10, int a12 =90 , int __=78 
=========================
operators :
1.airthematic : + - * / %  
    ex : int a 1 , int b=10  ==> cout<<(a%b); 
2.relational : == != > < >= <=
    ex : float a=10 ,b=10.0   ==> cout<<(a==b);  ==> True
3.logic : && ||  
4.bitwise : & | ^ << >>
5.assignment : = += -= *= /= %= ^= &= |= ^=
    ex: int a=10 b=23  ==>a= a+b  ==>a +=b  
6. inc / dec :
    pre inc : ++a    post inc :a++ 
    pre dec :--a     post dec :a-- 

    ex : int a=10 
    a++ + --a + ++a  + a-- + ++a - --a  ==> ?  
    10  +   10 + 11  +11 + 11 - 10  ==>43 
    */
/*
#include <iostream>
using namespace std;
int main()
{
    int  a; 
    float b=90.56; 
    char c='A';
    long int d =34567890; 
    double e=23456734.890;

    cout<<"enter the value of a :";
    cin>>a; 
    cout<<"a value is : "<<a<<endl;
    cout<<"b value is : "<<b<<endl;
    cout<<"c value is : "<<c<<endl;
    cout<<"d value is : "<<d<<endl;
    cout<<"e value is : "<<e<<endl;

    return 0; 
}
*/ 

// conditional statement  : 
/*
if(condition)        if (con)                
{
cout<<
}
else                else if()
{
    cout<<          else 
}

if (con)
    if (con)
    else 
else if 
    if (con)
    else 
else 

*/
/*
task :1 ask user to enter the three number  and which is big small medium. 
input  a =90  b=78 c=100    c big  b medium a small
*/