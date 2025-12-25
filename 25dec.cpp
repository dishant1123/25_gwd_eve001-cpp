/*

array : 

int a[5] ={1,2,3,4,5} ; 

index  start : 0   ==> cout<<a[0]  a[4]
======================
int a[5] ={1,2,3}
a[3],a[4] value is  0 
=====================

int a[50] ={1,2,3,4,5,6}

*/

// update : 
/*
int a[50] ={1,2,3,4,5,6}
index : a[2] =90 

output : {1,2,90,4,5,6}
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int a[50], num, i; 
    cout<<"enter the size of array : ";
    cin>>num; 

    for(i=0; i<num; i++)
    {
        cin>>a[i];  // a[5] ={1,2,3,4,5}
    }
    a[2]=90; 
    for(i=0; i<num; i++)
    {
        cout<<a[i]<<" ";  // {1,2,90,4,5,6}
    }
    return 0;
}
*/ 

// insert : 

/*
int a[5] ={10,20,30,40,50}

user  insert =90 
index = 2 
output : {10,20,90,30,40,50}
*/
#include<iostream>
using namespace std;
int main()
{
    int a[50], num, i,ins,pos; 
    cout<<"enter the size of array : ";
    cin>>num; 
    for(i=0; i<num; i++)
    {
        cin>>a[i];  
    }
    cout<<"before inserting new element in array  : "<<endl;
    for(i=0; i<num; i++)
    {                     //       0  1   2  3  4   5
        cout<<a[i]<<" ";  // a[5]={10,20, 90 30 40  50}
    }
    cout<<"enter the index where you want to insert : ";
    cin>>ins;  // 90 
    cout<<"enter the position where you want to insert : ";
    cin>>pos; // 2 
    for(i=num;i>pos; i-- )  // i=2  2 >2 
    {
        a[i]=a[i-1];   //   a[3]=a[2]
    }
    a[pos] =ins;   // a[2]=90  
    num++; 
    cout<<"after inserting new element in array  : "<<endl;
    for(i=0; i<num; i++)
    {
        cout<<a[i]<<" ";  // a[5]={10,20,90,30,40,50}
    }
    return 0; 
}

// serach : 
/*
int a[6]={10,20, 90 30 40  50}

enter the  element  you want  to search : 30 
index : 3
*/
// delete : 
/*
int a[5] ={10,20,30,40,50}

enter the  element  you want  to delete  : 30  
output : {10,20,40,50}
*/
