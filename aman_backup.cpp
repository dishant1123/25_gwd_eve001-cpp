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
/*
A hotel offers two types of rooms: Studio and Apartment.
Write a C++ program to calculate the total price of the stay for both room types.
The price depends on:

	The month of stay
	The number of nights (up to 30)
	Applicable discounts
Room Prices Per Night :

| Month Range          | Studio Price | Apartment Price |
| -------------------- | ------------ | --------------- |
| January – April      | $50 / night  | $60 / night     |
| May – August         | $70 / night  | $80 / night     |
| September – December | $80 / night  | $90 / night     |

Discount Rules
For Studio Rooms
January–April

	More than 3 nights → 20% discount
	More than 7 nights → 30% discount

May–August

	More than 3 nights → 10% discount
	More than 7 nights → 20% discount

September–December

	More than 3 nights → 5% discount
	More than 7 nights → 10% discount

For Apartment Rooms

	More than 7 nights, any month → 10% discount

Input:
Month of stay (e.g., January, May, September)
Number of nights (1–30)

Output:

Total studio rent after discount
Total apartment rent after discount

Example:

Input:
Month: May
Nights: 5

Output:
Studio Rent for 5 Nights is $315
Apartment Rent for 5 Nights is $400


*/
/*
loop  :
1.for:
2. while :
3. do while:
*/

// prime perfect amg twin reverse pelindrom strong 
/*
#include<iostream>
using namespace std;
int main()
{
    int i,sum=0,n; 
    cout<<"enter the number :";
    cin>>n; 

    for(i=1; i<n; i++)// 6 6 <6 
    {
        if(n %i==0) // 6  %5 ==0
        {
            sum =sum +i; // sum =6 
        }
    }
    if(n ==sum)
    {
        cout<<"perfect number";
    }
    return 0; 
}
*/

//amg : 

/*
153 : 
3 digit : 

each digit : 1**3  5**3  3**3  = 1  125 27 ==>1+125 +27 =153 
370 :27+343 =370    ===> 371   ==> amg 

1634 : 1**4  6**4  3**4  4**4   ==>1  1296  81  256  ==>1634 

*/
/*
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long int n,sum,temp,count=0; 
    cout<<"enter the number :";
    cin>>n; // 1634

    temp =n;  // temp =1634 
    while(temp > 0)  // > 0 
    {
        temp = temp/10;// temp =0
        count++;  // count =4 
    }
    temp =n; // temp =1634 
    sum =0 ; 
    while(temp >0)// 0 > 0 
    {
        int r= temp %10 ;// r = 1 %10 =1 
        sum = sum + pow(r,count); //sum =1634
        temp =temp /10; // temp =0
    }
    if(n==sum)
    {
        cout<<"amg";
    }
    return 0;
}
*/ 

// reverse pelindrom: 
/*
user =123 
rev =0 
while num > 0 
r= num %10   // 1 %10 =1 
rev = rev *10 +r  // rev = 32 *10 +1  = 321  
num = num /10     // num =0 

if num ==rev  ==> pelindrom 
*/

// strong  number  : 

/*
145 : 
    each factorial : 1! =1  4! = 1*2*3*4 =24  5! =1*2*3*4*5 =120
    sum = 1+24+120 =145

*/