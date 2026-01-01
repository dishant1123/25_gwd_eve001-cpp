/*
insertion sort :

==> work the same way we sort playing cards our hands. 
==> it takes one element at a time . 
==>places it in its correct position in the sorted array.
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
    {                      //        a[0] a[1] a[2] a[3] a[4]
        cout<<a[i]<<endl;  // a[5] ={1,     6,   2,   8,   4}
    }

    cout<<"insertion sort : \n";

    for(i=1; i<num; i++)// i =2  2 < 5 
    {
        int key =a[i];  //  key=2 
        j= i-1;  // j=1 
        while(j>=0 && a[j] >key) // 0 >=0 && a[0] > 2 
        {
            a[j+1] =a[j]; //    a[2]=6   
            j--;    // 0
        }
        a[j+1] =key;  // a[1]=2

    }
    cout<<"after  sorting  array element is :"<<endl;
    for(i=0; i<num; i++)
    {
        cout<<a[i]<<endl;
    }
    return 0; 
}
*/

// STL function  :  sort() 
/*
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[50],num,i,j ; 
    cout<<"enter the number of elements : ";
    cin>>num;
    for(i=0; i<num; i++)
    {
        cin>>a[i];
    }
    cout<<"before  sorting  array element is :"<<endl;
    for(i=0; i<num; i++)
    {
        cout<<a[i]<<endl;
    }
    // sort(a,a+num); // asc to desc 
    sort(a,a+num,greater<int>());
    cout<<"after  sorting  array element is :"<<endl;
    for(i=0; i<num; i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}

*/ 

// duplicate element remove in array  :

/*
int a[6] = {1,1,2,3,3,5} 
output  : {1,2,3,5}
*/