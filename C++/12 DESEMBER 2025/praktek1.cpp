#include <iostream>
using namespace std;

struct mahasiswa {
    string nama;
    int npm;
    float ipk;
};

int main() {
    mahasiswa mhs;
    char x;

    cout << "Masukkan Nama : ";
    getline(cin, mhs.nama);
    cout << "Masukkan NPM : ";
    cin >> mhs.npm;
    cout << "Masukkan IPK : ";
    cin >> mhs.ipk;
    
    cout << "Ingin Menambah Input Lagi[Y/N]:";
    cin >> x;

    if(x == 'Y' && x == 'y') {
    cout << "Masukkan Nama : ";
    getline(cin, mhs.nama);
    cout << "Masukkan NPM : ";
    cin >> mhs.npm;
    cout << "Masukkan IPK : ";
    cin >> mhs.ipk;
    } if(x == 'N' && x == 'n') {
        cout << "\nProses Selesai!" << endl;
    } else {
        cout << "\nError!" << endl;
    }

    cout << mhs.nama << " - " << mhs.npm << " - " << mhs.ipk;
    return 0;
}