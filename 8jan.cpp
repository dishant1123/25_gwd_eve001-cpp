/*
function  : 

1. no arg  no return 
2. with arg  no return 
3. no arg  with return 
4. with arg  with return
*/

// prime  : 

// no arg no return : 
/*
#include <iostream>
using namespace std;
void prime()
{
    int num,i,count =0 ; 
    cout<<"enter the number"<<endl;
    cin>>num; 
    for(i =1; i<=num; i++)
    {
        if(num %i==0)
        {
            count ++;
        }
    }
    if(count ==2)
    {
        cout<<"the number is prime"<<endl;
    }
}
int main()
{
    prime(); 
    return 0; 
}
*/

// with arg  no return : 
/*
#include <iostream>
using namespace std;
void prime(int num)
{
    int i,count =0 ; 
    for(i =1; i<=num; i++)
    {
        if(num %i==0)
        {
            count ++;
        }
    }
    if(count ==2)
    {
        cout<<"the number is prime"<<endl;
    }
}
int main()
{
    int num; 
    cout<<"enter the number"<<endl;
    cin>>num;
    // prime(5);
    prime(num); 
    return 0; 
}
*/

// no arg  with return : 
/*
#include <iostream>
using namespace std;
int prime()
{
    int i,num,count =0 ;
    cout<<"enter the number"<<endl;
    cin>>num; 
    for(i =1; i<=num; i++)
    {
        if(num %i==0)
        {
            count ++;
        }
    }
    if(count ==2)
    {
        return 1;
    }
    else
    {
        return 0; 
    }
}
int main()
{
    if(prime() ==1)
    {
        cout<<"the number is prime"<<endl;
    } 
    else 
    {
        cout<<"the number is not prime"<<endl;
    }
    return 0; 
}
*/

// with arg with return 
/*
#include <iostream>
using namespace std;
int prime(int num)
{
    int i,count =0 ;
    for(i =1; i<=num; i++)
    {
        if(num %i==0)
        {
            count ++;
        }
    }
    if(count ==2)
    {
        return 1;
    }
    else
    {
        return 0; 
    }
}
int main()
{
    int num; 
    cout<<"enter the number"<<endl;
    cin>>num; 
    
    if(prime(num) ==1)
    {
        cout<<"the number is prime"<<endl;
    } 
    else 
    {
        cout<<"the number is not prime"<<endl;
    }
    return 0; 
}
*/ 
/*
function   == >4   
amg   : 

*/

/*
ROYAL KID  BANK

1. create username  and password  and also generated pin for depsoit and withdraw. 
2.   options  :
    1. login  ==> compulsory   also  match the user name  and password you created . 
        condition  : if login is success then directly deposit 25000 in your account.
    2. deposit  ==> ask to enter the  pin number  if verfiy then you depsoit the money. 
    3. withdraw  ==> ask to enter the  pin number  if verfiy then you withdraw the money.
        a. condition  ==> you have maintain balance  min 10000 rs. 
    4. check balance   ==> not required for  pin  
    5 . exit 
3. menu driven program . ==> when user press exit then only exit the program

*/
