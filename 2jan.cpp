/*
2d matrix : 

original  matrix :  (3*3)

1 2 3  (0,0)1 (0,1)2 (0,2)3
4 5 6  (1,0)4 (1,1)5 (1,2)6
7 8 9  (2,0)7 (2,1)8 (2,2)9

transpose matrix : 

1 4 7 
2 5 8
3 6 9 

identity matrix : 

1 0 0  
0 1 0
0 0 1 
*/
/*
#include <iostream>
using namespace std;
int main()
{
    int a[3][3],i,j; 
    cout<<"enter the elements of the matrix"<<endl;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>a[i][j]; 
        }
    }
    cout<<"the original matrix is"<<endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<a[i][j]<<" "; 
        }
        cout<<endl;
    }
    cout<<"transpose matrix is"<<endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<a[j][i]<<" "; 
        }
        cout<<endl;
    }
    return 0;
}
*/ 

// identity matrix  check  : 
/*
#include <iostream>
using namespace std;
int main()
{
    int a[3][3],i,j,check=-1; 
    cout<<"enter the elements of the matrix"<<endl;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>a[i][j]; 
        }
    }
    cout<<"the original matrix is"<<endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<a[i][j]<<" "; 
        }
        cout<<endl;
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i==j && a[i][j]==1 || i!=j && a[i][j] ==0)
            {
                check=1;

            }
            else
            {
                check =-1; 
                break;
            }
                      
        }
    }
    if(check==1)
    {
        cout<<"the matrix is identity matrix"<<endl;
    }
    return 0; 
}
*/
/*
1 2 3 4 5 6 7 8 9  
1 0 0 
0 1 0
0 0 1  
*/

// matrix  multiplication  check  :

/*
A :    b : 

1 2    5 6     1*5 + 2*7 =19  1*6  + 2*8 =22
3 4    7 8      3*5    4 *7    3*6    4 *8   

multiplication  :

19 22
43 50  
*/

#include <iostream>
using namespace std;
int main()
{
    int a[2][2],b[2][2],c[2][2],i,j,k;
    cout<<"enter the elements of the matrix A "<<endl;

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter the elements of the matrix B "<<endl;
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {                   //   a     b
            cin>>b[i][j];  //   1 2   5 6 
        }                //     3 4   7 8
    }

    for(i=0; i<2; i++) // 0 0 <2 
    {
        for(j=0; j<2; j++) // 1 1 <2 
        {
            c[i][j] =0;  // c[0][1] = 0 
            for(k=0; k<2; k++)// k= 1  1 <2 
            {
                c[i][j] += a[i][k] * b[k][j]; // c[0][1] = c[0][1] + a[0][1] * b[1][1]
            }                                 //  c[0][1] = 22

        }
    }
    cout<<"the multiplication of the matrix A and B is"<<endl;
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0; 
}

// 