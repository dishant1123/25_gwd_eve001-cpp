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

/*
/*
Write a C++ program to calculate the monthly gross pay, annual income, and income tax of an employee using the following rules:

ask user to enter the city and grade.

1. Salary Components

Gross Pay =
Basic Pay + House Rent Allowance (HRA) + Dearness Allowance (DRA) + Other Allowances + Transport Allowance (TA) – Professional Tax – Provident Fund (PF)

| Grade | Basic Pay (₹) | Other Allowances (₹) |
| ----- | ------------- | -------------------- |
| A     | 60000         | 8000                 |
| B     | 50000         | 7000                 |
| C     | 40000         | 6000                 |
| D     | 30000         | 5000                 |
| E     | 20000         | 4000                 |
| F     | 10000         | 3000                 |

2. Constants & Formulas

Professional Tax = ₹200
Transport Allowance TA = ₹900
Provident Fund PF = 0.11 × Basic Pay
Dearness Allowance DRA = 0.5 × Basic Pay
 
HRA depends on city type:
City 1 (Tier 1) → HRA = 0.30 × Basic Pay
City 2 (Tier 2) → HRA = 0.20 × Basic Pay
City 3 (Tier 3) → HRA = 0.10 × Basic Pay

3.Annual Income = Gross Pay × 12      =                                  

4.
| Annual Income           | Tax                                    |
| ----------------------- | -------------------------------------- |
| Up to ₹2,50,000         | 0%                                     | 
| ₹2,50,001 – ₹5,00,000   | 5% of (Income – 2,50,000)              | 12500  
| ₹5,00,001 – ₹7,50,000   | 10% of (Income – 5,00,000) + 12,500    | 25000   
| ₹7,50,001 – ₹10,00,000  | 15% of (Income – 7,50,000) + 37,500    | 7500   
| ₹10,00,001 – ₹12,50,000 | 20% of (Income – 10,00,000) + 75,000   | 50000  
| ₹12,50,001 – ₹15,00,000 | 25% of (Income – 12,50,000) + 1,25,000 | 62500 
| Above ₹15,00,001        | 30% of (Income – 15,00,000) + 1,87,500 |

*/
