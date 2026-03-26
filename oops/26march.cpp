/*
vector :it is  a dynamic array from the STL that can grow and shrink in size. 
syntax : 
    vector<type> name 

method  : 
1. push_back  ==> add in last 
    ex : int  a[50] ={1,2,3,4,5}   ==> a[5] =90
2. pop_back ==> last element is removed
3. size ==> return the size of the vector
*/
// ex :1 
/*
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;   // empty vector 

    v.push_back(23); 
    v.push_back(45);
    v.push_back(67);
    v.push_back(89);
   
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }

    cout<<v.size()<<endl;
    return 0 ;
}
*/ 
// ex :2 
/*
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v={15,2,32,41,59};   // empty vector 
    cout<<"before sorting  : "<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    // cout<<v.size()<<endl;
    cout<<"after sorting  : "<<endl;

    // sort(v.begin(),v.end());  // sort(a,n)  sort(a,n <greater>)
    // dec to asc 

    sort(v.begin(),v.end(),greater<int>());
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    return 0 ;
}
*/ 

// ex :3 pop_back : 

#include <iostream>
#include<vector>
using namespace std;
int  main()
{
    vector<int>v;    // empty vector
    v.push_back(23);
    v.push_back(45);
    v.push_back(67);
    v.push_back(89);

    cout<<"before pop_back  : "<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    v.pop_back();

    cout<<"after pop_back  : "<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }

    // for(int x : v)
    // {
    //     cout<<x<<endl;
    // }
    return 0; 
}
