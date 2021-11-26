#include <iostream>
using namespace std;


double max(double arr[6]) {

int i;

for(i=1; i<6; i++){
    if(arr[0] < arr[i]){
        arr[0] = arr[i];
    }

}
cout << "The Largest Among Those Numbers Is : " << arr[0] << "\n";

}

int main(){

double arr[6] = {71, 4, 5, 98, 71, 2};

max(arr);

return 0;

}
