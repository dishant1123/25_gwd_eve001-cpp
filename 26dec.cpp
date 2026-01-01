/*
hw :
duplicate element remove in array  : 
int  a[5] ={1,2,3,3,5} ; 
output  : {1,2,3,5}
*/

/*
sorting  : 
1. bubble  sort   :asc to desc 
2. selection sort 
3. insertion sort

logic : 
    int a[5] = {1,6,2,5,9}; 
    asc desc ==> {1,2,5,6,9}
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int a[50],num,i,j,temp; 
    cout<<"enter the number of elements : ";
    cin>>num; 

    for(i=0; i<num; i++)
    {
        cin>>a[i];
    }
    cout<<"before  sorting  array element is :"<<endl; 
    for(i=0; i<num; i++)
    {
        cout<<a[i]<<endl;  // a[5] ={1,6,2,8,4}
    }
    cout<<"bubble sort : \n"; 
    for(i=0; i<num; i++) // 1  1 < 5 
    {
        for(j=i+1; j<num; j++) // j=2  2 < 5  
        {
            if(a[i] > a[j]) // a[1] > a[2]  6 > 2  
            {
                temp =a[i]; //     temp=6
                a[i] =a[j]; //    a[1]=2
                a[j] =temp; //          a[2]=6   // a[5] ={1,2,6,8,4}
            }
        }
    }
    cout<<"after  sorting  array element is :"<<endl;
    for(i=0; i<num; i++)
    {
        cout<<a[i]<<endl;
    }
    return 0; 
}
*/ 

// selection sort : 
#include<iostream>
using namespace std;
int main()
{
    int a[50],num,i,j,temp; 
    cout<<"enter the number of elements : ";
    cin>>num; 
    for(i=0; i<num; i++)
    {
        cin>>a[i];
    }
    cout<<"before  sorting  array element is :"<<endl; 
    for(i=0; i<num; i++)
    {
        cout<<a[i]<<endl;  // a[5] ={1,6,2,8,4}
    }
    cout<<"selection sort : \n";

    for(i=0; i<num; i++)// 0 0 <5 
    {
        int minindex =i;  // minindex = 0
        for(j =i+1; j<num; j++) // j =4 4 < 5 
        {
            if(a[j]< a[minindex]) // if a[4] > a[3] 4 > 8 
            {
                minindex =j;   //   minindex=3
            }
        }
        temp =a[i]; //   temp=a[0]   ==> temp =1 
        a[i] =a[minindex]; //   a[0]=8
        a[minindex] =temp; //    a[3]=1
    }
    cout<<"after  sorting  array element is :"<<endl;
    for(i=0; i<num; i++)
    {
        cout<<a[i]<<endl;
    }
    return 0 ;
}
