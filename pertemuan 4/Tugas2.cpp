#include <iostream>

using namespace std;

int main()
{
  //Tugas 2 progpram menampilkan gambar piramida
  int tinggiSegitiga,a,b,c;

  cout << "Input tinggi segitiga: ";
  cin >> tinggiSegitiga;

  cout << endl;

  for(a = 1; a <= tinggiSegitiga; a++) {
    //Spasi ke kanan untuk setiap baris
    for(b = 1; b <= tinggiSegitiga - a; b++) {
      cout << " ";
    }
    //Bintang untuk membentuk piramida
    for(c = 1; c <= a; c++) {
      cout << " *";
    }
    cout << endl;
  }

  return 0;
}
