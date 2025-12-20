#include <iostream>
using namespace std;

int main() {
    int x;
    string status, harga;

    cout << "1. Dosen" << endl;
    cout << "2. Mahasiswa" << endl;
    cout << "3. Umum" << endl;

    cout << "Masukkan Status Mu [1,2,3]: ";
    cin >> x;

    if (x == 1) {
    status = "Dosen";
    harga = "Rp50.000";
    } else if (x == 2) {
    status = "Mahasiswa";
    harga = "Rp75.000";
    } else {
    status = "Umum";
    harga = "Rp100.000";
    }

    cout << "Status Anda : " << status << endl;
    cout << "Pembayaran Anda : " << harga << endl;

    return 0;
}