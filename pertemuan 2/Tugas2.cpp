#include <iostream>

using namespace std;

int main()
{
    //Tugas 2

    int N, M; //Deklarasi variabel untuk N bebek dan M teman
    cout << "Masukkan jumlah bebek : "; //Meminta input pengguna untuk jumlah bebek
    cin >> N;
    cout << "Masukkan jumlah teman : "; //Meminta input  pengguna untuk jumlah teman
    cin >> M;

    int bebekYangDibagi = N / M; //Menghitung berapa bebek yang dibagi ke berapa teman
    int sisaBebek = N % M; //Menghitung sisa bebek yang tidak terbagi

    cout << "Setiap teman Pak Tatang akan mendapatkan " << bebekYangDibagi << " ekor bebek." << endl;
    cout << "sisa bebek yang tidak terbagi adalah " << sisaBebek << " ekor." << endl;

    return 0;
}
