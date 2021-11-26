#include <iostream>

using namespace std;
struct result
{
    string name;
    int matNum;
    double mark;
};
void getData(result student){
    cout<<"Please enter the student's name: ";
    cin>>student.name;
    cout<<"Please enter the student's matNum: ";
    cin>>student.matNum;
    cout<<"Please enter the student's mark: ";
    cin>>student.mark;
}


int main()
{
    result student;
    getData(student);
    return 0;
}
