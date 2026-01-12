/*
iostream
cout<< "hello"   ==> print  <<   left shift 
cin >>a      ==> scan   >>   right shift

=====================
data type  : 

1. int  : pos  or neg    ==> 32767 
2. float  : decimal   
3. char / string   : one character  , 
4. bool  : true  or false 
5. long  int   : exceeding  limit  ex :int a =90000 
6. double : decimal value  
======================

operators  :
1.airthematic   :   + - * / % 
    ex : 1 % 10   ==> 1   2 % 10 =2    remainder 
2. relational  :   ==  !=  >  <  >=  <= 
    ex : float a =10  float b =10.0    ==> cout <<(a==b)  
3. assignment  :  =  +=  -=  *=  /=  %= 
    ex : a =a+b   ==> a+=b 
4. bitwise  :  &  |  ^  <<  >>
5. logical  :  &&  ||   
6. inc /dec :  pre inc : ++a  post inc : a++  pre dec : --a post dec :a-- 
    
    ex : int a=10 
         a++  +  --a  + a--  + ++a  + a++  - --a   
         10   + 10   + 10  + 10  +10  - 10   

7. tenary  :  ? :
    
    */
/*

#include <iostream>
using  namespace std;   // std  : standard lib , namespace : container 
int main()
{
    int a=90; 
    float b= 78.45; 
    char  c='a'; 
    string d="manav";
    bool e = true;
    long int f =900000; 
    double g=12345635.234567456; 
    cout<<"my name is  manav"<<endl;   // end of the line   
    cout<<"age is 20";
    cout<<"a value is :"<<a<<endl;    // printf("a value is  : %d",a)
    cout<<"b value is :"<<b<<endl; 
    cout<<"c value is :"<<c<<endl;    
    cout<<"d value is :"<<d<<endl;    
    cout<<"e value is :"<<e<<endl;    
    cout<<"f value is :"<<f<<endl;    
    cout<<"g value is :"<<g<<endl;
    return 0; 
}
*/ 

// conditional statements and switch  : 

/*

if(con)
{
    cout<< 
}
else 
{
    cout<<
}

 ============
 if(con)
 {
    cout<<
 }
    else if(con)
    {
    cout<<
    }
else
{
cout<<
}
===========
if(con)
{
    if(con)   
        cout<<
    else 
        cout<<
}   
else if (con)
{
    if (con)
        cout<<
    else 
        cout<<
}

*/

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

3.Annual Income = Gross Pay × 12      =     2400000                              

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


hint  : 

    switch(grade)
    {
        case "A" :
            basic = 60000 ;
            others =8000;
    }
    switch(city)
    {
        case 1 :
            hra = basic *0.30 ;
            break ; 
    }
    da = basic *0.50 ;
    pf = basic *0.11 ;
    gross = basic + hra + da + others + ta - pf ;   // 200000 
    annual = gross *12 ;  // 2400000 


*/

// loop  : 

/*
1. for   :  entry 
2. while  : entry 
3. do while  : exit 
*/

// prime perfect amg twin reverse pelindrom strong

// amg  : 

/*
153 : 3 digit 
each digit : 1**3  5**3  3**3  = 1  125 27 ==>1+125 +27 =153 

1634 : 1**4  6**4  3**4  4**4   ==>1  1296  81  256  ==>1634
*/
/*
#include<iostream>
#include<cmath>
using  namespace std;
int main()
{
    int  num ,sum ,count=0 ,temp ; 
    cout<<"enter the  number  : ";
    cin>>num;  // 1634 

    temp =num; //temp =1634
    while(temp > 0)  // 0 > 0 
    {
        temp = temp /10 ;  // temp = 0
        count++ ; // 4
    } 
    temp = num;  // temp =1634 
    sum =0 ; 
    while(temp > 0) // 0 >0 
    {
        int  r=  temp %10; //r = 1 % 10 =1 
        sum =sum + pow(r,count); // sum = 1634
        temp = temp /10 ;  // temp = 0
    }
    if (num ==sum)
    {
        cout<<"amg ";
    }
    return 0; 

}
*/ 
// strong  number  : 

/*
145 : 

each digit : 1 =1 4 =24 5 = 120 
sum = 1+120 +24 =145 
*/
/*
#include<iostream>
using  namespace std;
int main()
{
    int num, temp , fact ,sum =0; 
    cout<<"enter the  number  : ";
    cin>>num; //145 

    temp = num;  // temp =145 

    while(temp > 0) // 0 > 0 
    {
        int  r = temp %10;  //r= 1  %10 =1
        fact =1;  // 1 
        for(int i =1; i<=r; i++)
        {
            fact =fact *i; // fact =1 
        }
        sum =sum +fact; // sum =145
        temp =temp /10 ; //  temp = 0 
    }
    if(sum ==num)
    {
        cout<<"strong number ";
    }
    return 0;
}
*/

// harshard number  : 
/*
ex : 18

each digit sum = 1+8 = 9 
 num %sum ==0  ==> harshard number
 18 % 9 ==0 
*/
/*
#include<iostream>
using  namespace std;
int main()
{
    int  num, sum =0,temp ,r;
    cout<<"enter the  number  : ";
    cin>>num;  //18 
    temp = num ; 
    while(temp > 0 ) // 0 > 0
    {
        r = temp %10 ; //r =1 %10 = 1
        sum =sum +r; // sum = 9 
        temp = temp /10; // temp = 0 
    }
    if(num %sum ==0) // 18 % 9 ==0
    {
        cout<<"harshard number ";
    }
    return 0; 
}
*/

// nested loop   : 
/*
prime perfect amg twin  pelindrom strong 


perfect : 6 factors : 1 2 3 6   sum = 1+2+3 = 6 
          28 factors : 1 2 4 7 14 28 sum =28  
*/
/*
#include<iostream>
using  namespace std;
int main()
{
    int start, end, i,j,sum; 
    cout<<"enter the starting  number : "; 
    cin>>start; 
    cout<<"enter the ending  number : "; 
    cin>>end;
    
    for(i=start; i<=end; i++) // 13  13 <=10000
    {
        sum =0; 
        for(j=1; j<i; j++) // 6  6  < 12
        {
            if(i % j==0) // 12 % 6 ==0 
            {
                sum =sum +j; // sum = 16
            } 
        } 
        if(sum ==i)
        {
            cout<<i<<" is perfect number ";
        }
    }
    return 0; 
}
*/ 
// pattern   : 


/*
1.        2.          3. 
*          * * * * *  1 2 3 4 5
* *        * * * *    2 3 4 5
* * *      * * *      3 4 5
* * * *    * *        4 5
* * * * *  *          5 

*/

//1 : 
/*
#include<iostream>
using  namespace std;
int main()
{
    int i ,j ; 
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0; 
}
*/
//2 : 
/*
#include<iostream>
using  namespace std;
int main()
{
    int i ,j ; 
    for(i=1; i<=5; i++)
    {
        for(j=5; j>=i; j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0; 
}
*/

// 3 : 
/*
#include<iostream>
using  namespace std;
int main()
{
    int i ,j ; 
    for(i=1; i<=5; i++)
    {
        for(j=i; j<=5; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0; 
}
*/

/*
4.           5.          6.          7. 
* * * * *    * * * * *         *         * 
  * * * *     * * * *        * *        * *
    * * *      * * *       * * *       * * * 
      * *       * *      * * * *      * * * * 
        *        *     * * * * *     * * * * *  
*/
// 4 
/*
#include<iostream>
using  namespace std;
int main()
{
    int i ,j ,k; 
    for(i=1; i<=5; i++)
    {
        for(k=1; k<i; k++)
        {
            cout<<"  "; 
        }
        for(j=5; j>=i; j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0; 
}
//5 :
#include<iostream>
using  namespace std;
int main()
{
    int i ,j ,k; 
    for(i=1; i<=5; i++)
    {
        for(k=1; k<i; k++)
        {
            cout<<" "; 
        }
        for(j=5; j>=i; j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0; 
}
*/

// 6 : 
/*
#include<iostream>
using  namespace std;
int main()
{
    int i ,j ,k; 
    for(i=1; i<=5; i++)
    {
        for(k=5; k>i; k--)
        {
            cout<<"  "; 
        }
        for(j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0; 
}
*/
/*
// 7 :
#include<iostream>
using  namespace std;
int main()
{
    int i ,j ,k; 
    for(i=1; i<=5; i++)
    {
        for(k=5; k>i; k--)
        {
            cout<<" "; 
        }
        for(j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0; 
}
*/
// 8 :
#include<iostream>
using  namespace std;
int main()
{
    int i ,j ,k; 
    for(i=1; i<=5; i++)
    {
        for(k=5; k>i; k--)
        {
            cout<<" "; 
        }
        for(j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i=1; i<=5; i++)
    {
        for(k=1; k<i; k++)
        {
            cout<<" "; 
        }
        for(j=5; j>=i; j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
/*
       1 
      1 2 
     1 2 3 
    1 2 3 4
   1 2 3 4 5
    1 2 3 4
     1 2 3
      1 2
       1
*/