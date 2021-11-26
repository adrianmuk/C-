#include <iostream>


using namespace std;
struct client{
    int clientID;
    string clientName, tel, address;
    float amountPaid;
};
struct item{
    int itemID, unitprice, amountpaid;
    string itemName;
    float quantity;
};

int main()
{
    client customer;
    item product;
    while(true){
        cout<<"CLIENT DETAILS"<<endl;
        cout<<"CLIENT ID: ";
        cin>>customer.clientID;
        if(customer.clientID==0){
            break;
        }
        cout<<"CLIENT NAME: ";
        cin>>customer.clientName;
        cout<<"PHYSICAL ADDRESS: ";
        cin>>customer.address;
        cout<<"CLIENT TELEPHONE NO.: ";
        cin>>customer.tel;
        cout<<"\n";
        cout<<"ITEM DETAILS"<<endl;

    float totalcost = 0;
    while(true){
        cout<<"ITEM ID: ";
        cin>>product.itemID;
        if(product.itemID==0){
            break;
        }
        cout<<"ITEM NAME: ";
        cin>>product.itemName;
        cout<<"QUANTITY: ";
        cin>>product.quantity;
        cout<<"UNIT PRICE: ";
        cin>>product.unitprice;
        float Cost = product.quantity*product.unitprice;
        cout<<"COST: "<<Cost<<endl;
        cout<<"\n\n";
        totalcost += Cost;

    }
    cout<<"TOTAL COST: "<<totalcost<<endl;
    cout<<"AMOUNT PAID: ";
    cin>>customer.amountPaid;
    float balance = customer.amountPaid-totalcost;
    cout<<"BALANCE: "<<balance<<endl;
    }

    return 0;
}
