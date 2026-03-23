/*
inventory management system : 

*/

#include <iostream>
#include <fstream>
#include<vector>
using namespace std;
class Product 
{
    protected : 
        int id; 
        string name; 
        int  price;
    public : 
        Product(int i, string n, int p)
        {
            id = i;
            name = n;
            price = p;
        }
    virtual void display()=0 ; 

    int get_id()
    {
        return id; 
    }
    int get_price()
    {
        return price;
    }
    string get_name()
    {
        return name;
    }
};
class electonics : public Product
{
    public : 
        electonics(int i, string n, int p) : Product(i, n, p)
        {
        }
    void display()
    {
        cout<<"id :"<<id <<"|" <<"name : "<<name<<"|" "price : "<<price <<"eletronics"<<endl;
    }
};
class clothes : public Product
{
    public : 
        clothes(int i, string n, int p) : Product(i, n, p)
        {
        }
    void display()
    {
        cout<<"id :"<<id <<"|" <<"name : "<<name<<"|" "price : "<<price <<"clothing"<<endl;

    }
};

//  ============ cart ================

class cart_item
{
    public : 
        Product *product; 
        int qty; 
    cart_item(Product *p, int q)
    {
        product =p; 
        qty = q;
    }
}; 
class cart 
{
    vector<cart_item> items;
    public : 
        void add_item(Product *p, int q)
        {
            items.push_back(cart_item(p,q)); 
            cout<<"item added"<<endl;
        }
        void show_items()
        {
            double total =0;
            cout<<"\n------cart------"<<endl;
            for(auto &i :items)
            {
                double  sub =i.qty * i.product->get_price();
                cout<<i.product->get_name()<<"x"<<i.qty<<"= rs."<<sub<<endl;
                total +=sub;
            }
            cout<<"Total Rs."<<total<<endl;
        }
        double get_total()
        {
            double total =0;
            for(auto &i : items)
            {
                total +=i.qty * i.product->get_price();
            }
            return total;
        }
        vector<cart_item> &get_items()
        {
            return items;
        }
};
class User 
{
    string  username ="user"; 
    string  password = "123"; 

    public : 
        bool login()
        {
            string u,p;
            cout<<"\nEnter username : ";
            cin>>u;
            cout<<"\nEnter password : ";
            cin>>p;

            return (u==username && p==password);
        }
};

class Admin 
{
    string  username ="admin";
    string  password = "admin";

    public : 
        bool login()
        {
            string u,p;
            cout<<"\nEnter username : ";
            cin>>u;
            cout<<"\nEnter password : ";
            cin>>p;
            return (u==username && p==password);
        }
    void addproduct(vector<Product*> &products)
    {
        int  id; 
        string name; 
        int  price; 
        int type; 

        cout<<"1.electonics"<<endl;
        cout<<"2.clothes"<<endl;
        cin>>type;
        cout<<"\nEnter id : name : price : ";
        cin>>id>>name>>price;

        if(type==1)
        {
            products.push_back(new electonics(id, name, price));

        }
        else 
        {
            products.push_back(new clothes(id, name, price));
        }
        cout<<"\nProduct added"<<endl;

    }
    void remove_product(vector<Product*> &products,int id)
    {
        for(int i=0;i<products.size();i++)
        {
            if(products[i]->get_id()==id)
            {
                products.erase(products.begin()+i);
                cout<<"\nProduct removed"<<endl;
                return;
            }
        }
        cout<<"\nProduct not found"<<endl;
    }
};
void searchproduct(vector<Product*> &products,string key)
{
    for(auto p:products )
    {
        if(p->get_name()==key)
        {
            p->display();
        }
    }
}

void saveorder(cart &c)
{
    ofstream file("orders.txt",ios::app); 
    for(auto &i :c.get_items())
    {
        file<<i.product->get_name()<<endl;
        file<<i.qty<<endl;
        file<<i.product->get_price()<<endl; 
    }
    file<<"total : "<<c.get_total()<<endl;
    file<<'------------------------------\n'; 
    file.close();

}
int  main()
{
    vector<Product*> products;

    products.push_back(new electonics(1, "mouse", 100));
    products.push_back(new clothes(2, "shirt", 200));

    User user; 
    Admin admin;
    cart c; 

    int choice ; 
    cout<<"1. login"<<endl;
    cout<<"2.admin - login"<<endl;
    if(choice ==1)
    {
        if(!user.login())
        {
            cout<<"\nLogin failed"<<endl;
            return 0; 
        }
    }
    else if (choice ==2)
    {
        if(admin.login())
        {
            int ch; 
            do{
                cout<<"\n1.add product"<<endl;
                cout<<"2.remove product"<<endl;
                cout<<"3.exit"<<endl;
                cin>>ch; 
                if(ch==1)
                {
                    admin.addproduct(products);
                }
                else if (ch ==2)
                {
                    int id; 
                    cout<<"Enter id : ";
                    cin>>id;
                    admin.remove_product(products,id);
                }

            }while(ch!=3);
        }
    }
    return 0;
    
}


/*
read  : exiting file  ==> txt   
write : new create + write  ==> exiting file  ==> overwrite  
append : new create + write  ==> exiting file  ==> add 
*/