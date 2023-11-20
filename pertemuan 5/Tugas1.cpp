#include <iostream>
using namespace std;

void bilanganGanjil(int batas) {
    int jumlah = 0;
    cout << "\nBilangan Ganjil antara 1 dan " << batas << " adalah: ";
    for (int i = 1; i <= batas; i += 2) {
        cout << i << " ";
        jumlah += i;
    }
    cout << "\nJumlah Bilangan Ganjil antara 1 dan " << batas << " adalah: " << jumlah;

    cout << "\nFaktor dari jumlah Bilangan Ganjil antara 1 dan " << batas << " adalah: ";
    for (int i = 1; i <= jumlah; i++) {
        if (jumlah % i == 0) {
            cout << i << " ";
        }
    }
}

void bilanganGenap(int batas) {
    int jumlah = 0;
    cout << "\n\nBilangan Genap antara 1 dan " << batas << " adalah: ";
    for (int i = 2; i <= batas; i += 2) {
        cout << i << " ";
        jumlah += i;
    }
    cout << "\nJumlah Bilangan Genap antara 1 dan " << batas << " adalah: " << jumlah;

    cout << "\nFaktor dari jumlah Bilangan Genap antara 1 dan " << batas << " adalah: ";
    for (int i = 1; i <= jumlah; i++) {
        if (jumlah % i == 0) {
            cout << i << " ";
        }
    }
}

void bilanganPrima(int batas) {
    int jumlah = 0;
    cout << "\n\nBilangan Prima antara 1 dan " << batas << " adalah: ";
    for (int i = 2; i <= batas; i++) {
        int faktor = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                faktor++;
            }
        }
        if (faktor == 2) {
            cout << i << " ";
            jumlah += i;
        }
    }
    cout << "\nJumlah Bilangan Prima antara 1 dan " << batas << " adalah: " << jumlah;

    cout << "\nFaktor dari jumlah Bilangan Prima antara 1 dan " << batas << " adalah: ";
    for (int i = 1; i <= jumlah; i++) {
        if (jumlah % i == 0) {
            cout << i << " ";
        }
    }
}

int main() {
    int batas;
    cout << "Masukkan batas bilangan: ";
    cin >> batas;

    bilanganGanjil(batas);
    bilanganGenap(batas);
    bilanganPrima(batas);

    return 0;
}
