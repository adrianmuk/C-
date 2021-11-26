
#include <iostream>

using namespace std;

int main() {

int number;
char entered_string, user_input;

while(true){
    cout << "Enter any number or enter 0 to exit: ";
    cin >> number;

        if (number == 0){
            cout << "Are you sure you want to exit? (Y/N): ";
            cin >> user_input;
            if (user_input == 'Y' or user_input == 'y'){
                cout << "Thank you for using this program. Have a good luck!";
                return 0;
            }
            else if(user_input == 'N' or user_input == 'n'){
                continue;
            }
        }

    cout << "Enter your choice, star[s] and hash[h]: ";
    cin >> entered_string;

    if(entered_string == 'h'){
        for(int i=0; i<number; i++){
            cout << "#";
        }
          cout << "\n";

    }
    else if (entered_string == 's'){
        for(int j=0; j<number; j++){
            cout << "*";
        }
        cout << "\n";

        }

}

return 0;

}
