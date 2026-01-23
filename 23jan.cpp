/*
structure  : 

int  a[5] = {1,2,3,4,5};

(int)    (string)  (int)
rollno  name      marks 
1       om        78 
2       trisha    90 
*/

//ex :1 

#include<iostream>
using namespace std;
struct bank 
{
    string name; 
    int  accno,balance;
}b[3];

int main()
{
    //struct bank  b[3];
    for(int i=0; i<3; i++)
    {
        cout<<"enter name of customer "<<i+1<<"\n";
        cin>>b[i].name; 
        cout<<"enter accno : "<<i+1<<"\n";
        cin>>b[i].accno; 
        cout<<"enter balance : "<<i+1<<"\n";
        cin>>b[i].balance; 
    }
    cout<<"accno\tname\tbalance\n";

    for(int i=0; i<3; i++)
    {
        cout<<b[i].accno<<"\t"<<b[i].name<<"\t"<<b[i].balance<<"\n";
    }
    return 0; 
}

/*
srno accno   name    balance
1    12345   om      900
2    4545    trisha  200
3    9898    bhavya  23000
4    2323    aman    100 
task :1 
display only  those  customer name whose balance is  less then 500. 

task :2 

if  customer balance more  than  500 then  add 1000 rs  in their balance and print  updated balance with name. 
output  :  
        name    balance
        om      1900 
        bhavya  24000   
*/