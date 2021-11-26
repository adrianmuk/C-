#include <iostream>

using namespace std;
struct item{
string itemName;
int quantity;
int price;
int cost;
};

int main()
{
    int totalCost=0;
    item items;
   for(int i=0; i<5;i++){
    cout<<"Item Name: ";
    cin>>items.itemName;
    cout<<"Quantity: ";
    cin>>items.quantity;
    cout<<"Price: ";
    cin>>items.price;
    items.cost=items.price*items.quantity;
    cout<<"Cost: "<<items.cost<<endl;
    cout<<"\n\n";
    totalCost+=items.cost;
   }
   //cout<<items;

   cout<<"Total cost: "<<totalCost<<endl;
    return 0;
}
