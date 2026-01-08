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