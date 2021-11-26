#include <iostream>

using namespace std;
double max(double num[10]){
    double maxnumber = 0;
    for(int i=0; i<10; i++){
        if(num[i]>maxnumber){
            maxnumber=num[i];
        }
    }
    cout<<"The maximum number in the array is "<<maxnumber<<endl;
}

int main()
{
    double numbers[10];
    for(int i=0; i<10;i++){
    cout<<"Number "<<i+1<<endl;
    cin>>numbers[i];
    }
    max(numbers);
    return 0;
}
