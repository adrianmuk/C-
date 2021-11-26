#include <iostream>

using namespace std;
int fact(int A[10]){
    int factorial;
    for(int i=0;i<10; i++){
        factorial=A[i];
        int j=A[i];
        if(A[i]>0 && A[i]<=10){
            if (A[i]==1){
                factorial=1;
            }
            else
                while(A[i]>1){
                    A[i]--;
                    factorial=factorial*A[i];
                }
        cout<<"The factorial of "<<j<<" is "<<factorial<<endl;
        }
        else
            cout<<A[i]<<" is out of range"<<endl;

    }
}

int main()
{
    int numbers[10];
    for (int i=0; i<10;i++){
        cout<<"No. "<<i+1<<": ";
        cin>>numbers[i];
    }
    fact(numbers);
    return 0;
}
