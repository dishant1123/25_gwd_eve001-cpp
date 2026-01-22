/*
Write a C++ program to manage movie ticket bookings using arrays and functions.

Menu:
1. Add Movie 
    ==> enter the  movie id ,  name ,  seats , timings 
2. Book Tickets 
    ==> enter the  movie  id , qty  
3. Search Movie  ==> enter  the  movie  id 
4. Display Movie List
5. Exit

Movie Details:
- Movie ID
- Movie Name
- Available Seats
- Timings
- Price

 book  ticket  : 
        1. gold    : 350 
        2. silver  : 450 
        3. platinum: 600
example  : 

addmovie () ,addmovie () , 

id   name   seats   timings   
101   KGF    90       9pm ,9am 
102   RRR    30       10 am,10pm
*/

#include <iostream>
using namespace  std; 
#define MAX 100 

int isunique_id(int  id[] ,int  count,int mid)
{
    for(int i=0; i<count; i++)
    {
        if(id[i] ==mid)
        {
            return 0; 
        }
    }
    return 1; 
}
void addmovie(int  id[],string name[], int seats[],string timings[],int &count)
{
    int mid; 
    cout<<"Enter Movie ID : ";
    cin>>mid; 
    
    if(!isunique_id(id,count,mid))
    {
        cout<<"Movie ID already exists"<<endl;
        return ;
    }
    id[count] =mid; 
    cout<<"enter the movie name  : "; 
    cin>>name[count]; 
    cout<<"enter the movie seats  : "; 
    cin>>seats[count]; 
    cout<<"enter the movie timings  : ";
    cin>>timings[count];
    count ++; 
    cout<<"Movie added successfully"<<endl;
}
void booktickets(int id[],string name[] , int seats[],string timings[], int count)
{
    int  mid,qty,choice,price =0,flag=0;
    cout<<"enter the  movie id : ";
    cin>>mid; 

    for(int i=0; i<count; i++)
    {
        if(id[i] ==mid)
        {
            flag=1; 
            cout<<"Movie Name :"<<name[i]<<endl;
            cout<<"Available Seats :"<<seats[i]<<endl;
            cout<<"Timings :"<<timings[i]<<endl;

            cout<<"Tickets Catergory :"<<endl;
            cout<<"1. Gold"<<endl;
            cout<<"2. Silver"<<endl;
            cout<<"3. Platinum"<<endl;
            cout<<"Enter your choice : ";
            cin>>choice;
            
            if (choice ==1)
            {
                price =350; 
            }
            else if(choice ==2)
            {
                price =450;
            }
            else if(choice ==3)
            {
                price =600; 
            }
            else 
            {
                cout<<"Wrong Choice"<<endl;
                return ;
            }
            cout<<"enter the qty  : "; 
            cin>>qty;
            if(qty > seats[i])
            {
                cout<<"Not enough seats available"<<endl;
                return; 
            }
            seats[i] -=qty; 
            int  total = price * qty;
            cout<<"BILL FOR TICKET BOOKING :"<<endl;
            cout<<"Movie Name : "<<name[i]<<endl;
            cout<<"Timings : "<<timings[i]<<endl;
            cout<<"seats available : "<<seats[i]<<endl;
            if (choice ==1) 
            {
                cout<<"Gold : -"<<qty<<" "<<"tickets : "<<total<<"Rs"<<endl;
            }
            else if(choice ==2)
            {
                cout<<"Silver : -"<<qty<<" "<<"tickets : "<<total<<"Rs"<<endl;
            }
            else if(choice ==3)
            {
                cout<<"Platinum : -"<<qty<<" "<<"tickets : "<<total<<"Rs"<<endl;
            }
        }
    }
    if(flag==0)
    {
        cout<<"Movie ID not found"<<endl;
    }
}
int main()
{
    int movieid[MAX],mseats[MAX],count =0;
    string moviename[MAX],timings[MAX];
    int choice =0; 
    
    do
    {
        cout<<"1.add movie"<<endl;
        cout<<"2ticket booking"<<endl;
        cout<<"3.search movie"<<endl;
        cout<<"4.display movie list"<<endl;
        cout<<"5. delete movie"<<endl;
        cout<<"6.exit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1: 
                addmovie(movieid,moviename,mseats,timings,count);
                break;
            case 2: 
                booktickets(movieid,moviename,mseats,timings,count);
                break;
            default :
                cout<<"Wrong Choice"<<endl;
                break;
        }

    } while (choice !=6);
    return 0; 
}

/*
id   name   seats   timings   
101   KGF    90       9pm ,9am 
102   RRR    30       10 am,10pm
*/