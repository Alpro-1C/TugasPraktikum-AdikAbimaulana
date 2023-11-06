#include <iostream>
using namespace std;

int main() {
    //Tugas 3 program deret Fibonacci
    int n, nomor1 = 0, nomor2 = 1, nomorBerikutnya;
    cout << "Masukkan jumlah bilangan dalam deret Fibonacci: ";
    cin >> n;
    cout << "Deret Fibonacci: ";
    for (int i = 1; i <= n; i++) {
        cout << nomor1 << " ";
        nomorBerikutnya = nomor1 + nomor2;
        nomor1 = nomor2;
        nomor2 = nomorBerikutnya;
    }
    return 0;
}
