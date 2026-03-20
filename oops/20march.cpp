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
