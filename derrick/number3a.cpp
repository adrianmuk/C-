#include <iostream>

using namespace std;

int main()
{

char A;

cout <<"Please enter a lowercase letter:";
cin >> A;

switch(A){

case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
    cout << "\nA vowel letter" <<endl;
    break;

default:
    cout <<"\nNot a vowel letter" <<endl;
    break;
}

return 0;

}
