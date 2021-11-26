#include <iostream>

using namespace std;

int main()
{
    int number;
    string symbol, answer;

    while(true){
        cout<<"Enter any number or enter 0 to exit: ";
        cin>>number;
        if (number==0){
            cout<<"Are you sure you want to exit? (Y/N): ";
            cin>>answer;
            if(answer=="Y"){
                cout<<"Thank you for using this program. Have a good luck!";
                break;
            }
            else if(answer=="N"){
                continue;
            }
        }
        else{
            cout<<"Enter your choice, star[s] and hash[h]: ";
            cin>>symbol;
            if(symbol=="s"){
                for(int j=0;j<=number;j++){
                    cout<<"*";
                }
                cout<<"\n\n";
            }
            else if(symbol=="h"){
                for(int k=0;k<=number;k++){
                    cout<<"#";
                }
                cout<<"\n\n";
            }
        }
    }
}
