#include <iostream>
using namespace std;

void deretFibonacci(int n) {
    int num1 = 0, num2 = 1, nextNum;
    cout << "Deret Fibonacci: ";
    for (int i = 1; i <= n; ++i) {
        cout << num1 << " ";
        nextNum = num1 + num2;
        num1 = num2;
        num2 = nextNum;
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah bilangan dalam deret Fibonacci: ";
    cin >> n;

    deretFibonacci(n);

    return 0;
}
