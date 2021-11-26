#include <iostream>
#include <array>
using namespace std;
string replace(string word[10]){
    char vowels[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for(int i=0; i<10; i++){
        string wordie =word[i];
        string word1=word[i];
        for(int j=0; j<word1.length(); j++){
            for(int k=0; k<10; k++){
                if (word1[j]==vowels[k]){
                    word1[j]='#';
                }
                else
                    word1[j]=word1[j];
            }
        }

    cout<<wordie<<": "<<word1<<endl;
    }
}

int main(){
    string words[10];
    for (int i=0; i>=0;i++){
        cout<<"Word "<<i+1<<": ";
        cin>>words[i];
        if (words[i]=="Stop" || words[i]=="STOP" || words[i]=="stop"){
            break;
        }
    }
    replace(words);
    return 0;
}
