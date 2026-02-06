/*
2d array  :


*/

// ex :1 
/*
#include<iostream>
using namespace std;
int main()
{
    int  a[50][50],row ,col ,i, j; 
    cout<<"enter the row : ";
    cin>>row;
    cout<<"enter the col : ";
    cin>>col;

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"matrix : \n"<<endl; 
        for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0; 
}
*/
/*

1 2 3 
4 5 6 
7 8 9 

1 row sum : 6 
2 row sum : 15
3 row sum : 24
1 col sum : 12 
2 col sum : 15
3 col sum : 18

*/

/*
matrix mulplication  : 

{1,2,3}       {7,8},         64   76 
{4,5,6}       {9,10}, 
              {15,16}      

*/

// ex :2  

#include<iostream>
using namespace std;
int main()
{
    int  a[2][3], b[3][2] , c[2][2]={0};
    cout<<"enter the matrix A : "<<endl;

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter the matrix B : "<<endl;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin>>b[i][j];
        }
    }
    
    // matrix multiplication
/*
    A              B
    {1,2,3}       {7,8},          70  76
    {4,5,6}       {9,10}, 
                  {15,16}      

*/
    for(int i=0; i<2; i++) // 0    0 <2 
    {
        for(int j=0; j<2; j++) // 2  2 <2 
        {
            for(int  k=0; k<3; k++) // 2  2 <3 
            {
                c[i][j] += a[i][k] * b[k][j];  // c[0][1] = c[0][1]+ a[0][2] * b[2][1]
            }
        }
    }
    cout<<"matrix multiplication : "<<endl;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

