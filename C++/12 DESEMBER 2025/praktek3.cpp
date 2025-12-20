#include <iostream>
using namespace std;

struct Mahasiswa {
float ipk;
string nama;
int id;
};


int main() {
    Mahasiswa daftarMahasiswa[3];

    for(int i = 0 ; i < 3 ; i++) {
    cout << "Masukkan id Mahasiswa : ";
    cin >> daftarMahasiswa[i].id;
    cin.ignore();

    cout << "Masukkan Nama Mahasiswa : ";
    getline(cin, daftarMahasiswa[i].nama);
    
    cout << "Masukkan IPK Mahasiswa : ";
    cin >> daftarMahasiswa[i].ipk;

    cout << "\n";
    }

    return 0;
}