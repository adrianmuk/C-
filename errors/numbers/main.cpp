#include <iostream>

using namespace std;
struct client {
int cid, tel, num_of_items;
string name, address;
float total, cash, balance;
};
struct item {
int itemid, quantity, unitprice;
string itemname;
};

int main()
{
    client customer
    item product
    string name, tel, address, itemname;
    int cid, itemid, unitprice, quantity, cash, total, balance;
    cout<<"CUSTOMER ID NO.: ";
    cin>>ccustomer.cid;
    cout<<"CUSTOMER NAME: ";
    cin>>customer.name;
    cout<<"TELEPHONE NUMBER: ";
    cin>>customer.tel;
    cout<<"PHYSICAL ADDRESS: ";
    cin>>customer.address;
    cout<<"\n\n";
    cout<<"ITEMID: ";
    cin>>product.itemid;
    cout<<"ITEM NAME: ";
    cin>>product.itemname;
    cout<<"UNIT PRICE(UGSHS): ";
    cin>>product.unitprice;
    cout<<"QUANTITY: ";
    cin>>product.quantity;
    total = quantity*unitprice;
    cout<<"TOTAL AMOUNT TO BE PAID: "<<total<<endl;
    cout<<"AMOUNT PAID: ";
    cin>>cash;
    balance = cash - total;
    cout<<"BALANCE: "<<balance<<endl;

    return 0;
}
