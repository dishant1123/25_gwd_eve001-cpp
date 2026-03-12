/*
menu driven  + array  + inheritance  + friend +encapsualtion  : 

*/
#include <iostream>
using namespace std;
class person 
{
    private : 
        int age;   // encapsulation   ==> get ==> print  , set ==> modify  ==> private 
        
    public : 
        string name; 

        void setperson(string n, int a)
        {
            name =n; 
            age =a;
        }
        int get_age()
        {
            return age;
        }
        friend void display(person p);
};
class student : public person 
{
    private : 
        int marks; 
    public : 
        void setstudent(string n, int a, int m)
        {
            setperson(n,a); 
            marks =m; 
        }
        void showstudents()
        {
            cout<<"name is  : "<<name<<endl;
            cout<<"age is  : "<<get_age()<<endl;
            cout<<"marks is  : "<<marks<<endl;
        }
};
void display(person p)
{
    cout<<"friend function access : \n"; 
    cout<<"name is  : "<<p.name<<endl;
    cout<<"age is  : "<<p.get_age()<<endl;
}


int main()
{
    student s[3];  // array of  object 
    int  choice;
    int  i=0;
    string name; 
    int age, marks; 
    
    do
    {
        cout<<"menu \n";
        cout<<"1.add student \n";
        cout<<"2.display student \n";
        cout<<"3. friends function display \n";
        cout<<"4.exit \n";
        cout<<"enter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1 :
            if(i<3)
            {
                cout<<"enter name : ";
                cin>>name;
                cout<<"enter age : ";
                cin>>age;
                cout<<"enter marks : ";
                cin>>marks;
                s[i].setstudent(name,age,marks);
                i++;
            }
            else 
            {
                cout<<"no more space left \n";
            }
            break;
            case 2 : 
                for(int j=0; j<i; j++)
                {
                    cout<<"student "<<j+1<<" details \n";
                    s[j].showstudents(); 
                }
                break;
            case 3: 
                if(i>0)
                {
                    for(int j=0; j<i; j++)
                    {
                        display(s[j]);
                    }
                }
                else 
                {
                    cout<<"no student found \n";
                }
            case 4 :
                cout<<"exiting \n";
                break;
            default :
                cout<<"invalid choice \n";
                break;
        }
    } while (choice!=4);
    return 0 ;
}