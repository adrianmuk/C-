#include <iostream>
#include <iomanip>

using namespace std;

struct Date {
    int month;
    int day;
    int year;

    };

int days(Date&);


int main()
{
Date current;
int num;


cout << "Enter the current month: ";
cin >> current.month;
cout << "\nEnter the current day: ";
cin >> current.day;
cout << "\nEnter the current 4-digit year: ";
cin >> current.year;

num = days(current);

cout << "\nThe number of days since the turn of the"
<< " century is: " << num;

cin.get();cin.ignore();

return 0;
}

int days(Date& temp)
{
return (
        (temp.day-1) + 30*(temp.month - 1) +
360*(temp.year-1900));

 }
