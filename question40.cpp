#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, originalNum, remainder, n = 0;
    double sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    // Count the number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    // Calculate sum of digits raised to the power n
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, n);
        temp /= 10;
    }

    // Check if the number is Armstrong
    if (sum == originalNum)
        cout << originalNum << " is an Armstrong number." << endl;
    else
        cout << originalNum << " is NOT an Armstrong number." << endl;

    return 0;
}
