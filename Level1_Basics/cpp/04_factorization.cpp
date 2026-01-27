#include <iostream>
#include <cmath>
using namespace std;

int count_1(int n){
    if (n == 0) return 1;

    int count = 0;
    while(n > 0){
        int tmp = n % 10;
        count++;
        n /= 10;
    }
    return count;
}

int count_2(int n){
    if (n == 0) return 1;
    return (int) (log10(n) + 1);
}

// main
int main() {
    int a; 
    cin >> a;

    cout << "No of digits: "<< count_2(a) << endl;
    return 0;
}
