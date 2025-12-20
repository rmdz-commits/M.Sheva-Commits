#include <iostream>
using namespace std;

struct Buku {
string judul, pengarang;
int tahun;
};


int main() {
    Buku buku1;

    cout << "Masukkan Judul Buku : ";
    getline(cin, buku1.judul);
    cout << "Masukkan Nama Pengarang Buku : ";
    getline(cin, buku1.pengarang);
    cout << "Masukkan Tahun Terbit : ";
    cin >> buku1.tahun;


    cout << "\n-------------------------\n" << endl;


    cout << "Judul : " << buku1.judul << endl;
    cout << "Pengarang : " << buku1.pengarang << endl;
    cout << "Tahun : " << buku1.tahun << endl;

    return 0;
}