#include <iostream>

using namespace std;

struct result {

string name;
int matNum;
double mark;

};


void getData(result student){

cout << "Please enter the student name: ";
cin >> student.name;

cout << "Please enter the student matNum: ";
cin >> student.matNum;

cout << "Please enter the student mark: ";
cin >> student.mark;

cout << student.name << endl;
cout << student.matNum << endl;
cout << student.mark << endl;

}


int main(){

result adrian;

getData(adrian);


return 0;

}
