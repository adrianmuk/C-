#include <iostream>
#include <math.h>



struct customer {
int id, telephone_number, num_of_items;
string name, address;
float amount_paid, customer_amount;
};

struct item {
int id, quantity;
string name;
float unit_price;

};


int main(){

customer client;
item product;

int b_inventory, e_inventory, avg_invetory, turnover;
float balance, total_amount, total_daily_sales, cost_of_goods_sold, amount_paid;


cout << "Please enter the Customer ID: ";
cin >> client.id;

cout << "Please enter the customer's name: ";
cin >> client.name;

cout << "Please enter the customer's address: ";
cin >> client.address;

cout << "Please enter the customer's telephone number: ";
cin >> client.telephone_number;

cout << "How many items has the user bought?";
cin >> client.num_of_items;


float amount[10];


for(int i=0; i<client.num_of_items; i++){

cout << "********** ITEM " << i+1 << " **********\n";
cout << "Please enter the item ID: ";
cin >> product.id;

cout << "Please enter the item name: ";
cin >> product.name;

cout << "Please enter the unit price of the item: ";
cin >> product.unit_price;

cout << "What Quantity is the user purchasing?: ";
cin >> product.quantity;

total_amount = product.quantity * product.unit_price;
cout << total_amount;
amount[i] = total_amount;
}


for(int j=0; j<client.num_of_items; j++){
    amount_paid += amount[j];
}

cout << "\nThe Total amount for all items bought is : " << amount_paid;

cout << "\nHow much money has been paid by the customer?: ";
cin >> client.customer_amount;

balance = client.customer_amount-amount_paid;
cout << "The Balance is: " << balance << endl;

cout << "\n\nPlease enter the beginning invetory: ";
cin >> b_inventory;

cout << "Please enter the ending inventory: ";
cin >> e_inventory;

cout << "Please enter the cost of goods sold: ";
cin >> cost_of_goods_sold;

avg_invetory = (b_inventory+ e_inventory)/2;
turnover = (cost_of_goods_sold/avg_invetory);


cout << "\nThe Average Inventory is : " << avg_invetory << endl;
cout << "The Turnover is : " << turnover << endl;
return 0;

}
