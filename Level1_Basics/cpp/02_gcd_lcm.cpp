#include <iostream>
using namespace std;

// approach 1: brute force
bool gcd(int n) {
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
    cin >> a;

    cout << "GDC: "<< gcd(a) << endl;
    return 0;
}
