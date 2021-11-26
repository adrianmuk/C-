#include <iostream>

using namespace std;
string pickWord (){
    array words[] = {"book", "radio", "xylophone", "acre","act","alter", "fence", "big", "bang", "theory", "young", "mother", "xenophobia", "action", "station", "hotel", "restaurant", "bar", "beer", "vodka", "java", "javascript", "maximum", "remote", "bottle", "ice", "perfume", "paper", "pepper", "lotion", "baptist", "wire", "metal", "metallic", "juice", "plastic", "handle", "watch", "clock", "brush", "comb", "trousers", "notice", "shoe", "shoes", "enter", "keyboard", "delete", "formula", "function", "home", "key", "board", "shift", "control", "option", "options", "space", "polythene", "sanitizer", "polymerizer", "polymer", "petroleum", "photosynthesis", "computer", "laptop", "magnetic", "surgical", "surgery", "beautiful", "sublimation", "sublime", "fuse", "refuse", "serial", "universal", "bus", "intercom", "broadcast", "railway", "international", "sewage", "reservoir", "football", "soccer", "fluoride", "chlorine", "sodium", "chloride", "calcium", "magnesium", "iron", "manganese", "copper", "potassium", "litter", "litre", "springs", "umbrella", "lift", "fork", "port", "hyperventilated", "hyper", "hypertext", "transfer", "protocol", "markup", "language", "toothbrush", "faint", "feint", "paint", "potential", "hydrogen", "burglar", "proof", "design", "fire", "water", "package", "oxygen", "earphones", "headset"};
    return words[Math.floor(Math.random()*words.length)];
}
string setupAnswerArray (string word){
    array answer[];
    for(int i=0; 1<word.length; i++){
        answer[i] = "_";
    }
    return answer;
}
string showPlayerProgress (array answer){
    cout<<answer.join(" ")<<endl;
}
void getGuess(){
    char guess;
    cout<<"Please guess a letter or click cancel to stop"<<;
    cin>>guess;
}
void updateGameState(guess, word, answer){
    int appearances = 0;
    for(int j=0; j<word.length; j++){
        if(word[j]===guess){
            if(answer[j]==="_"){
                answer[j]=guess;
                appearances++;
            }
        }
    }
    return appearances;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
