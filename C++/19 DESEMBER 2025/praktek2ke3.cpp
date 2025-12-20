#include <iostream>
using namespace std;

class Mahasiswa {

public:
    string nama, nim;
    int umur;
    
    // Constructor
    Mahasiswa(string n, string id, int u) {
        nama = n;
        nim = id;
        umur = u;
        cout << "Object Mahasiswa Telah Dibuat!" << endl;
    }

    //Destructor
    ~Mahasiswa() {
        cout << "Object Mahasiswa Telah Dihapus!" << endl;
    }

    void tampilkanData() {
        cout << "Nama : " << nama << endl;
        cout << "NIM : " << nim << endl;
        cout << "Umur : " << umur << endl;
    }
};

int main() {
    Mahasiswa m1("Budi","12345678",20);
    m1.tampilkanData();
    return 0;
}