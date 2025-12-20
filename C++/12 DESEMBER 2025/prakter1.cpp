#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string ket;
    string siswa[5];
    int nilai[5];
    for(n=0;n<5;n++) {
        cout << "Masukkan Nama Siswa : ";
        getline(cin, siswa[n]);
    }

    cout << " " << endl;

    for(n=0;n<5;n++) {
        cout << "Masukkan Nilai " << siswa[n] << " : ";
        cin >> nilai[n];
    }

    cout << " " << endl;

    for(n=0;n<5;n++) {
        cout << "Nama Siswa " << n << " = " << siswa[n] << endl;
        cout << "Nilai " << siswa[n] << " = " << nilai[n] << endl;
    }

    cout << "\nNama - Nilai - Keterangan" << endl;

    for(n=0;n<5;n++) {
        if(nilai[n] >= 60) {
            ket = "LULUS";
        } else {
            ket = "GAGAL";
        }
        cout << "\033[31m" << siswa[n] << "\033[0m - " << "\033[32m" << nilai[n] << "\033[0m - " << "\033[33m" << ket << "\033[0m" << endl;
    }
    return 0;
}