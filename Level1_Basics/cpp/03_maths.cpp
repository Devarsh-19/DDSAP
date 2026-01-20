#include <iostream>
#include <Bits.h>
using namespace std;

int count_1(int n){
    int count = 0;
    while(n > 0){
        int tmp = n % 10;
        count++;
        n = n/10;
    }
    return count;
}

int count_2(int n){
    int count = (int) log10(n);
}
int count_1(int n){
    int count = 0;
    while(n > 0){
        int tmp = n % 10;
        count++;
        n = n/10;
    }
    return count;
}

int main() {
    int a; 
    cin >> a;

    cout << "No of digits: "<< count_2(a) << endl;
    return 0;
}
