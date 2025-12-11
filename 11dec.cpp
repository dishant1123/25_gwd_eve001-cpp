/*
loop  : 

1. for loop  :
2. while :
3. do while:  
*/
// prime perfect amg twin  reverse pelindrome strong 

// strong  number  : 145  ==> 1 + 24 +120 = 145 
/*
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0 ,fact,r, temp,i; 
    cout<<"enter the  number  : "; 
    cin>>n;  //145 
    temp =n ;   //temp  =145 

    while(temp >0)  //  0 > 0 
    {
        r= temp %10;   // r=1 %10 =1 
        fact =1;  // fact=1  
        for(i=1; i<=r; i++) // 1 1<=5 
        {
            fact =fact *i;   // fact =1 
        }
        sum =sum +fact;  // sum =120 +24=145
        temp = temp /10; // temp =1 /10 = 0  
    }
    if(n==sum)
    {
        cout<<" number is strong  ";
    }
    return 0;
    
}
*/

/*
que :2 
2. C++ Program to Print All Harshad Numbers Between 1 and 100

A Harshad number is divisible by the sum of its digits.

Example:
18 → digits sum = 1 + 8 = 9
18 % 9 == 0 → Harshad number

steps : 
1. take  a  number  
2. reminder ==> n= n %10 
3. sum =sum +r 
4. num = num / 10 
5. if num %sum ==0  print harshard

*/

#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,r,temp; 
    cout<<"enter the  number  : ";
    cin>>n; 
    temp = n;

    while(temp >0)
    {
        r=  temp %10 ;
        sum =sum +r; 
        temp = temp /10; 
    }
    if (n %sum ==0)
    {
        cout<<" number is harshad ";
    }
    return 0; 
}

/*
C++ Program to Print All Disarium Numbers Between 1 and 100

A number is Disarium if:
sum of each digit raised to the power of its position = number
Example: 175 → 1¹ + 7² + 5³ = 175
*/