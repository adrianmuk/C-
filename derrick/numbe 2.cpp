#include <iostream>
using namespace std;

void swap(int x, int y){
int temp;

temp = x+y;
x = temp-x;
y = temp-y;

cout << "The swapped value of X is: " << x << endl;
cout << "The swapped value of Y is: " << y << endl;
}

int main(){
string x, y;

cout << " Please enter the value of X: ";
cin >> x;

cout << " Please enter the value of Y: ";
cin >> y;

swap(x, y);

return 0;

}
