/*
/*
ROYAL KID  BANK

1. create username  and password  and also generated pin for depsoit and withdraw. 
2.   options  :
    1. login  ==> compulsory   also  match the user name  and password you created . 
        condition  : if login is success then directly deposit 25000 in your account.
    2. deposit  ==> ask to enter the  pin number  if verfiy then you depsoit the money. 
    3. withdraw  ==> ask to enter the  pin number  if verfiy then you withdraw the money.
        a. condition  ==> you have maintain balance  min 10000 rs. 
    4. check balance   ==> not required for  pin  
    5 . exit 
3. menu driven program . ==> when user press exit then only exit the program

*/

#include<iostream>
using  namespace std; 

char username[20],password[20]; 
int pin;
int balance =0; 
bool islogin =false; 

void createAccount()
{
    cout<<"enter the username : ";
    cin>>username; 
    cout<<"enter the password : ";
    cin>>password;
    cout<<"enter the pin : ";
    cin>>pin;
    cout<<"account created successfully: ";
}
void login()
{
    char u[20],p[20]; 
    cout<<"enter the username : ";
    cin>>u; 
    cout<<"enter the password : ";
    cin>>p; 
    
    int i=0 ;
    bool match =true; 
    while(username[i] !='\0' || u[i] !='\0')
    {
        if(username[i] !=u[i])
        {
            match =false; 
            break;
        }
        i++; 
    }
    i=0; 
    while(password[i] !='\0' || p[i] !='\0')
    {
        if(password[i] !=p[i])
        {
            match =false;
            break;
        }
        i++;
    }
    if (match) 
    {
        islogin =true; 
        balance =25000; 
        cout<<"login success"<<endl;
        cout<<"25000 deposited in your account"<<endl;
    }
    else 
    {
        cout<<"login failed"<<endl;
    }
}
void deposit()
{
    if(!islogin)
    {
        cout<<"you are not login"<<endl;
        return ;
    }
    int  enterpin,amt; 
    cout<<"enter the  pin  : "; 
    cin>>enterpin; 
    if(enterpin ==pin)
    {
        cout<<"enter the  amount  you want  to depposit  : "; 
        cin>>amt; 
        balance +=amt; 
        cout<<"deposit success"<<endl;
    }
    else 
    {
        cout<<"incoorect pin"<<endl;
    }
}
void withdraw()
{
    if(!islogin)
    {
        cout<<"you are not login"<<endl;
        return ;
    }
    int  enterpin,amt; 
    cout<<"enter the  pin  : "; 
    cin>>enterpin; 
    if(enterpin ==pin)
    {
        cout<<"enter the  amount  you want  to withdraw  : ";
        cin>>amt; 

        if(balance -amt >=10000) 
        {
            balance -=amt; 
            cout<<"withdraw success"<<endl;
        }
        else 
        {
            cout<<"you have not enough min  balance require is 10000 rs"<<endl;
        }
    }
    else 
    {
        cout<<"incoorect pin"<<endl;
    }
}
void checkbalance()
{
    if(!islogin)
    {
        cout<<"account is not login"<<endl;
        return ; 
    }
    cout<<"your balance is "<<balance<<endl;
}
int main()
{
    int choice ; 
    cout<<"ROYAL KID BANK"<<endl;
    createAccount();
    do{
        cout<<"1. login"<<endl;
        cout<<"2. deposit"<<endl;
        cout<<"3. withdraw"<<endl;
        cout<<"4. check balance"<<endl;
        cout<<"5. exit"<<endl;
        cout<<"enter your choice : ";
        cin>>choice; 
        switch(choice)
        {
            case 1:
                login();
                break;
            case 2: 
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4 :
                checkbalance();
                break;
            case 5 :
                cout<<"bye  bye"<<endl; 
                break;
            default :
                cout<<"enter the correct choice"<<endl;
                break;
            
        }
    }while(choice !=5);
    return 0; 
}
/*
task  :1  for creating  password 
    password : 1. len min  8 characters. 
               2. 1 character upper case and  1 character lower case.
               3. min 1 digit required. 
               4. min 1 special character. 
task 2  : 
    3 attempts  : for  login.   
*/

