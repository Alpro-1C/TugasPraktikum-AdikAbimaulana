#include <iostream>

using namespace std;

int main()
{
    //Tugas 1 menukar nilai suatu variabel

    //Pertukaran menggunakan variabel tambahan
    int firstValue = 10;
    int secondValue = 8;
    int tempValue;

    //Sebelum pertukaran
    cout << "Sebelum pertukaran menggunakan variabel tambahan" << endl;
    cout << "firstValue = " << firstValue << endl;
    cout << "secondValue = " << secondValue << endl << endl;

    tempValue = firstValue; //tempValue akan menyimpan nilai firstValue yaitu 10
    firstValue = secondValue; //Lalu firstValue akan menyimpan nilai secondValue yaitu 8
    secondValue = tempValue; //Dan lalu secondValue akan menyimpan nilai tempValue yaitu 10

    //Setelah pertukaran
    cout << "Setelah pertukaran menggunakan variabel tambahan" << endl;
    cout << "firstValue sekarang adalah : " <<  firstValue << endl;
    cout << "secondValue sekarang adalah : " << secondValue << endl << endl << endl;

    //Pertukaran tanpa variabel tambahan
    int nilaiPertama = 10;
    int nilaiKedua = 8;

    //Sebelum pertukaran tanpa menggunakan variabel tambahan
    cout << "Sebelum pertukaran tanpa menggunakan variabel tambahan" << endl;
    cout << "nilaiPertama :" << nilaiPertama << endl;
    cout << "nilaiKedua :" << nilaiKedua << endl << endl;

    nilaiPertama = nilaiPertama + nilaiKedua; //nilaiPertama = 10 + 8 = 18
    nilaiKedua = nilaiPertama - nilaiKedua; //nilaiKedua = 18 - 8 = 10
    nilaiPertama = nilaiPertama - nilaiKedua; //nilaiPertama = 18 - 10 = 8

    //Setelah pertukaran tanpa menggunakan variabel tambahan
    cout << "Setelah pertukaran tanpa menggunakan variabel tambahan" << endl;
    cout << "nilai pertama sekarang adalah : " << nilaiPertama << endl;
    cout << "nilai kedua sekarang adalah : " << nilaiKedua << endl << endl;


    return 0;
}
