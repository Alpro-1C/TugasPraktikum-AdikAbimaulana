#include <iostream>

using namespace std;

void gambarPiramida(int tinggi) {
  for (int i = 1; i <= tinggi; i++) {
    for (int j = 1; j <= tinggi - i; j++) {
      cout << " ";
    }
    for (int k = 1; k <= i; k++) {
      cout << " *";
    }
    cout << endl;
  }
}

int main() {
  
  int tinggiSegitiga;

  cout << "Input tinggi segitiga: ";
  cin >> tinggiSegitiga;

  cout << endl;

  gambarPiramida(tinggiSegitiga);

  return 0;
}
