#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int next = num + 1;
    while (true) {
        if (isPrime(next)) {
            cout << "Next prime number after " << num << " is " << next << endl;
            break;
        }
        next++;
    }

    return 0;
}
