#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 15, 69, 35};
    int ukuranArr = sizeof(arr) / sizeof(arr[0]); //Menghitung ukuran array

    if (ukuranArr == 0) {
        cout << "Array kosong" << endl; //Kasus array kosong
        return 0;
    }

    int nilaiTertinggi = arr[0]; //Menyimpan nilai tertinggi
    int indeks = 0; //Menyimpan indeks nilai tertinggi

    //Mencari nilai tertinggi dan indeksnya
    for (int i = 1; i < ukuranArr; ++i) {
        if (arr[i] > nilaiTertinggi) {
            nilaiTertinggi = arr[i];
            indeks = i;
        }
    }

    cout << "Nilai tertingginya adalah " << nilaiTertinggi << " dan berada di indeks ke - " << indeks << endl;

    return 0;
}
