#include <iostream>

using namespace std;
struct info
{
string name;
float speed, size, price;
};
void laptops(info laptop){
float maxspeed = 0;
float maxprice;
string maxco;
float maxsize;
 for(int i=0; i<10; i++){
    cout<<"\t\tEnter the company name: ";
    cin>>laptop.name;
    cout<<"\t\tEnter the processor speed(GHz): ";
    cin>>laptop.speed;
    cout<<"\t\tEnter the RAM size(GB): ";
    cin>>laptop.size;
    cout<<"\t\tEnter the laptop's price(RM): ";
    cin>>laptop.price;
    cout<<"\n\n";
    if(laptop.speed>maxspeed){
        maxspeed = laptop.speed;
        maxprice = laptop.price;
        maxco = laptop.name;
        maxsize = laptop.size;
    }
}
cout<<"\t\t***************************************************"<<endl;
cout<<"\t\tThe laptop with the highest speed is: "<<maxco<<endl;
cout<<"\t\tWith a processor speed of: "<<maxspeed<<"GHz"<<endl;
cout<<"\t\tRAM size of: "<<maxsize<<"GB"<<endl;
cout<<"\t\tAt a price of: RM"<<maxprice<<endl;
cout<<"\t\t***************************************************"<<endl;
}

int main()
{
    info laptop;

    laptops(laptop);
    return 0;
}
