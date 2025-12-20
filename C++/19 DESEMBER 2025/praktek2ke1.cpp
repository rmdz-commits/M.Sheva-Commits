#include <iostream>
using namespace std;

class Mahasiswa {
    public:
    string nama, nim;
    int umur;

    void tampilkanData() {
        cout << "Nama : " << nama << endl;
        cout << "NIM : " << nim << endl;
        cout << "Umur : " << umur << endl;
    }
};

int main () {
    Mahasiswa ucup;

    ucup.nama = "Budi";
    ucup.nim = "12345678";
    ucup.umur = 20;

    ucup.tampilkanData();
    return 0;
}