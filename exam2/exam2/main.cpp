#include <iostream>
using namespace std;
struct client {
int id, numofitems, amountpaid, customeramount;
string name, tel,  address;
};

struct item {
int id, quantity, unitprice;
string name;

};


int main(){

 client customer;
item product;

int Oinventory, Cinventory, avginvetory, turnover;
float balance, totalamount, total_dailysales, cogs, amountpaid;


cout << "Please enter the Customer ID: ";
cin >> customer.id;

cout << "Please enter the customer's name: ";
cin >> customer.name;

cout << "Please enter the customer's address: ";
cin >> customer.address;

cout << "Please enter the customer's telephone number: ";
cin >> customer.tel;

cout << "How many items has the user bought?";
cin >> customer.numofitems;


float amount[10];


for(int i=0; i<customer.numofitems; i++){

cout << "********** ITEM " << i+1 << " **********\n";
cout << "Please enter the item ID: ";
cin >> product.id;

cout << "Please enter the item name: ";
cin >> product.name;

cout << "Please enter the unit price of the item: ";
cin >> product.unitprice;

cout << "What Quantity is the user purchasing?: ";
cin >> product.quantity;

totalamount = product.quantity * product.unitprice;
cout << totalamount;
amount[i] = totalamount;
}


for(int j=0; j<customer.numofitems; j++){
    amountpaid += amount[j];
}

cout << "\nThe Total amount for all items bought is : " << amountpaid;

cout << "\nHow much money has been paid by the customer?: ";
cin >> customer.customeramount;

balance = customer.customeramount-amountpaid;
cout << "The Balance is: " << balance << endl;

cout << "\n\nPlease enter the opening invetory: ";
cin >> Oinventory;

cout << "Please enter the closing inventory: ";
cin >> Cinventory;

cout << "Please enter the cost of goods sold: ";
cin >> cogs;

avginvetory = (Oinventory+ Cinventory)/2;
turnover = (cogs/avginvetory);


cout << "\nThe Average Inventory is : " << avginvetory << endl;
cout << "The Turnover is : " << turnover << endl;
return 0;

}

