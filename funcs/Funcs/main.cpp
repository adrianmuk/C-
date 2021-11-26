#include <iostream>
using namespace std;
void findMax(int x, int y){
    int maxnum;
    if (x>y){
        maxnum=x;
        cout<<"\t\t\t\tThe maximum number is "<<maxnum<<endl;
    }

    else if(y>x){
        maxnum=y;
        cout<<"\t\t\t\tThe maximum number is "<<maxnum<<endl;
    }
    else
        cout<<"\t\t\t\tThe numbers are equal"<<endl;



}
int main(){
    int firstnum, secnum, maxnum;
    cout<<"\t\t\t\tPlease enter a number: ";
    cin>>firstnum;
    cout<<"\t\t\t\tGreat! Now enter a second number: ";
    cin>>secnum;


    findMax(firstnum, secnum);
    return 0;
}

