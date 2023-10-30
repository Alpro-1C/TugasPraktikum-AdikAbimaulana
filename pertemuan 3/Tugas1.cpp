#include <iostream>
using namespace std;

int main() {
    //Tugas 1 mengevaluasi nilai score dengan logika if

    //Input nilai score
    int score;
    cout << "Masukkan nilai score: ";
    cin >> score;

    if (score >= 90) {
        cout << "Selamat! Anda mendapatkan nilai A." << endl;//Jika score lebih dari sama dengan 90
    } else if (score >= 80 && score <= 89) {
        cout << "Anda mendapatkan nilai B." << endl;//Dan jika score lebih dari sama dengan 80 dan kurang dari sama dengan 89
    } else if (score >= 70 && score <= 79) {
        cout << "Anda mendapatkan nilai C." << endl;//Dan jika score lebih dari sama dengan 70 dan kurang dari sama dengan 79
    } else if (score >= 60 && score <= 69) {
        cout << "Anda mendapatkan nilai D." << endl;//Dan jika score lebih dari sama dengan 60 dan kurang dari sama dengan 69
    } else {
        cout << "Anda mendapatkan nilai E." << endl;//Lainnya score 59 ke bawah
    }

    return 0;
}
