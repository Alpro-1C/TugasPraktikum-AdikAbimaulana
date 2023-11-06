#include <iostream>
using namespace std;

int main() {
    int batas;
    cout << "Masukkan batas bilangan positif: ";
    cin >> batas;

    int jumlahGanjil = 0, jumlahGenap = 0, jumlahPrima = 0;

    //Bilangan ganjil antara 1 dan batas
    cout << "\nBilangan ganjil antara 1 dan " << batas << " adalah: ";
    for (int i = 1; i <= batas; i += 2) {
        cout << i << " ";
        jumlahGanjil++;
    }
    //Bilangan genap antara 1 dan batas
    cout << "\nBilangan genap antara 1 dan " << batas << " adalah: ";
    for (int i = 2; i <= batas; i += 2) {
        cout << i << " ";
        jumlahGenap++;
    }
    //Bilangan prima antara 1 dan batas
    cout << "\nBilangan Prima antara 1 dan " << batas << " adalah: ";
    for (int i = 2; i <= batas; i++) {
        int faktor = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                faktor++;
            }
        }
        if (faktor == 2) {
            cout << i << " ";
            jumlahPrima++;
        }
    }


    //Jumlah semua bilangan ganjil, genap, prima antara 1 dan batas
    cout << "\n\nJumlah semua bilangan ganjil antara 1 dan " << batas << " adalah: " << jumlahGanjil;

    cout << "\nJumlah semua bilangan genap antara 1 dan " << batas << " adalah: " << jumlahGenap;

    cout << "\nJumlah semua bilangan prima antara 1 dan " << batas << " adalah: " << jumlahPrima;


    //Faktor dari jumlah ganjil, genap, prima tersebut
    cout << "\n\nFaktor-faktor dari jumlah ganjil tersebut adalah: ";
    for (int i = 1; i <= jumlahGanjil; i++) {
        if (jumlahGanjil % i == 0) {
            cout << i << " ";
        }
    }

    cout << "\nFaktor-faktor dari jumlah genap tersebut adalah: ";
    for (int i = 1; i <= jumlahGenap; i++) {
        if (jumlahGenap % i == 0) {
            cout << i << " ";
        }
    }

    cout << "\nFaktor-faktor dari jumlah prima tersebut adalah: ";
    for (int i = 1; i <= jumlahPrima; i++) {
        if (jumlahPrima % i == 0) {
            cout << i << " ";
        }
    }

    return 0;
}
