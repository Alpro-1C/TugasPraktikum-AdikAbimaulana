#include <iostream>
using namespace std;

int main() {
    //Tugas 2 mencetak angka terbesar dari ketiga angka yang ada

    //Input ketiga angka
    int angka1, angka2, angka3;
    cout << "Masukkan tiga angka: ";
    cin >> angka1 >> angka2 >> angka3;

    /*Memeriksa angka1 dan angka2 dahulu
    1. angkaTerbesar akan menyimpan angka1, jika angka2 lebih besar dari angka1, angkaTerbesar akan menyimpan angka2
    2. angkaTerbesar akan menyimpan angka1, jika angka1 lebih besar dari angka2, angkaTerbesar tetap menyimpan angka1*/
    int angkaTerbesar = angka1;
    if (angka2 > angkaTerbesar) {
        angkaTerbesar = angka2;
    }

    /*lalu memeriksa angkaTerbesar dengan angka3
    1. jika angka3 lebih besar dari angkaTerbesar, angkaTerbesar akan menyimpan angka3
    2. jika angkaTerbesar lebih besar dari angka3, angkaTerbesar tetap menyimpan nilainya*/
    if (angka3 > angkaTerbesar) {
        angkaTerbesar = angka3;
    }

    cout << "Angka terbesar di antara ketiganya adalah: " << angkaTerbesar << endl;

    return 0;
}
