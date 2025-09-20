#include <iostream>
using namespace std;

int main() {
    long long number;
    int count = 0;

    cout << "Enter a number: ";
    cin >> number;

    // Handle 0 explicitly
    if (number == 0) {
        count = 1;
    } else {
        if (number < 0) {
            number = -number; 
        }
        while (number > 0) {
            number /= 10; 
            count++;
        }
    }

    cout << "Number of digits: " << count << endl;

    return 0;
}
