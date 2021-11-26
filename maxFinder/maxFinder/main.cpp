#include <iostream>
using namespace std;
double max(double a[10]){
    for(int i = 0; i < 10; i++){
        if (a[0] < a[i]){
            a[0]=a[i];
        }
    }
    cout<<"The largest number in the array is "<<a[0]<<"."<<endl;
}


int main()
{
    double numbers[10] = {10, 11, 13, 14, 20, 21, 90, 15, 19, 1};
    max(numbers);
    return 0;
}
