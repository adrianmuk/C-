
#include <iostream>
using namespace std;

int fact(int A[10]){

int factorial, i, j;

for (i=0; i<10; i++){

    if (A[i] >0 && A[i] <= 10){

        if (A[i] == 1){
            factorial = 1;
            j = 1;
        }
        else {

           factorial = A[i];
            j = A[i];

         do {
            A[i]--;
            factorial = factorial * A[i];
        } while (A[i]>1);
        }
cout << "The Factorial of " << "*" << j << "*" << " is : " << factorial << "\n";


} else {
 cout << A[i] << " is out of range!\n";


    }
}
}


int main(){

int i;
int A[10];

for (i=0; i<10; i++){
    cout << "Please Enter Number " << i+1 << " : ";
    cin >> A[i];
}
cout << "\n==================================\n";
cout << " ||||||||||||OUTPUT||||||||||||||\n";
cout << "==================================\n\n";

fact(A);

return 0;

}
