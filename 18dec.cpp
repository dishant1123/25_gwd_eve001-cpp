/*
nested loop  : 

*/

// amg : 
/*
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long int i,start,end,count,sum;
    cout<<"enter the  start number  : ";
    cin>>start;
    cout<<"enter the  ending number  : ";
    cin>>end;

    for(i=start; i<=end; i++) // 100  -10000 
    {
        long int  temp =i ; 
        count =0;
        while (temp > 0)  // 0 > 0 
        {
            temp = temp /10;  // 0
            count++;       // 3
        }  
        temp =i; 
        sum =0 ; 
        while (temp > 0 ) // 0 > 0 
        {
            int  r= temp %10;   // r = 1   
            sum =sum + pow(r,count); // sum =153
            temp = temp /10 ; //temp =0 
        }
        if (i==sum)
        {
            cout<<i<<" is amg \n";
        }
    }
    return 0;

}
*/ 

//  Harshad number : 

#include<iostream>
using namespace std;
int main()
{
    long int i,start,end ,sum,temp; 
    cout<<"enter the  start number  : ";
    cin>>start;
    cout<<"enter the  ending number  : ";
    cin>>end;

    for(i=start; i<=end; i++) // 10 -100000 
    {
        temp =i;  // 
        sum =0 ; 
        while(temp >0) // 0  >0 
        {
            int r=  temp %10 ; // r= 1 %10 = 1  
            sum =sum +r;    // sum = 1 
            temp = temp /10;  // temp = 0  
        }
        if (i %sum ==0) // 10 % 1==0 
        {
            cout<<i<<endl;
        }

    }
    return 0; 
}
