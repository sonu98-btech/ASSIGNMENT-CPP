#include <iostream>
using namespace std;

int main() {
    char choice;
    double temp, converted;

    cout << "Choose conversion type:" << endl;
    cout << "F -> Convert Fahrenheit to Celsius" << endl;
    cout << "C -> Convert Celsius to Fahrenheit" << endl;
    cout << "Enter your choice (F/C): ";
    cin >> choice;

    if (choice == 'F' || choice == 'f') {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        converted = (temp - 32) * 5.0 / 9.0;
        cout << "Temperature in Celsius: " << converted << " °C" << endl;
    } 
    else if (choice == 'C' || choice == 'c') {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        converted = (temp * 9.0 / 5.0) + 32;
        cout << "Temperature in Fahrenheit: " << converted << " °F" << endl;
    } 
    else {
        cout << "Invalid choice! Please enter F or C." << endl;
    }

    return 0;
}
