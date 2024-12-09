#include <iostream>
using namespace std;

int main() {
  
    int angka[5];
    int jumlah = 0;

    cout << "Masukkan 5 angka:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Masukkan elemen ke-" << i + 1 << ": ";
        cin >> angka[i];
    }
    
	for (int i = 0; i < 5; i++) {
        jumlah += angka[i];
    }

    cout << "Jumlah semua elemen adalah: " << jumlah << endl;

    return 0;
}
