#include <iostream>

using namespace std;
void swap(int x, int y){
    int num = x;
    x=y;
    y=num;
    cout<<"The first number is now "<<x<<" and the second is now "<<y<<"."<<endl;
}

int main()
{
    int num1, num2;
    cout<<C:\Users\USER\Desktop\C++\funcs\Funcs\main.cpp"Please enter the first number: ";
    cin>>num1;
    cout<<"Great! Now enter the second number: ";
    cin>>num2;
    swap(num1, num2);
    return 0;
}
