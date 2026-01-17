#include <iostream>
using namespace std;

// approach 1: brute force
bool checkPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a; 
    cout << "Input a number: ";
    cin >> a;

    cout << "Is Prime: " << checkPrime(a) << endl;
    return 0;
}
