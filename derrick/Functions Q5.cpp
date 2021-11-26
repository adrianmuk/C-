#include <iostream>
using namespace std;

struct info{

string company_name;
float speed, ram_size, price;

};

void func(info laptop){
int i;

int max_processor_speed = 0;
int highest_price;
string highest_company;


for (i=0; i<10; i++){
cout << "=========";
cout << "Company " << i+1;
cout << "=========\n\n";

cout << "Please Enter The Company Name: ";
cin >> laptop.company_name;

cout << "Please Enter The Processor Speed (Ghz): ";
cin >> laptop.speed;

cout << "Please Enter The Ram Size (GBs): ";
cin >> laptop.ram_size;

cout << "What is the Total Price of the Computer (UGX): ";
cin >> laptop.price;
cout << "\n";

if(laptop.speed>max_processor_speed){
    highest_price = laptop.price;
    highest_company = laptop.company_name;
    max_processor_speed = laptop.speed;

}
}
cout << "The Company Name is : " << highest_company << "\n";
cout << "The Price is : " << highest_price << "\n";

}


int main(){
info laptop;


func(laptop);

return 0;
}
