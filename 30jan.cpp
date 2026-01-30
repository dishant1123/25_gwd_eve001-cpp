/*
union  vs structure  : 

union  : user define  data type where all members  are the same memory location. 

*/

// ex :1 
/*
#include<iostream>
using namespace std;
union data
{
    int i; 
    float f ;
}; 
int main()
{
    data  d; 
    d.i =10; 
    cout<<"Integer value  is  : "<<d.i<<"\n";

    d.f =10.5; 
    cout<<"Float value  is  : "<<d.f<<"\n";
    return 0;
}
// notes : i and f share memory . when f is assigned  then i gets overwritten. 
*/
// ex :2 
/*
#include<iostream>
using namespace std;
union  test 
{
    int i;
    float f;
    char c;
}; 
int main()
{
    cout<<sizeof(test)<<"\n";
    return 0;
}
*/ 

// difference between union and structure :
/*
features        union               structure
1.memory        shared                seprate 
2.size          largest member       sum of  all members 
3.values stored one at a time        all together  

*/
