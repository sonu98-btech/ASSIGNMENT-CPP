#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int first = 0, second = 1, next;

    bool found = false;

    if (num == 0 || num == 1) {
        found = true; 
    } else {
        while (second <= num) {
            if (second == num) {
                found = true;
                break;
            }
            next = first + second;
            first = second;
            second = next;
        }
    }

    if (found)
        cout << num << " is in the Fibonacci series." << endl;
    else
        cout << num << " is NOT in the Fibonacci series." << endl;

    return 0;
}
