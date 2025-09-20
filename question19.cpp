#include <iostream>
using namespace std;

int main() {
    int month, year;

    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    int days;

    if (month == 2) {
        // Check leap year
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            days = 29;
        } else {
            days = 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else {
        days = 31;
    }

    cout << "Number of days in month " << month << " of year " << year << " is: " << days << endl;

    return 0;
}
