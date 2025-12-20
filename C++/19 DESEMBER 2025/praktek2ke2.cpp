#include <iostream>
using namespace std;

class Mahasiswa {
    private:
    float ipk;

    public:
    string nama,nim;

    void setipk(float nilai) {
        ipk = nilai;
    }

    float getipk() {
        return ipk;
    }
};

int main () {
    Mahasiswa bb;
    bb.nama = "Budi";
    bb.nim = "12345678";
    bb.setipk(3.75);

    cout << "Nama : " << bb.nama << endl;
    cout << "NIM : " << bb.nim << endl;
    cout << "IPK : " << bb.getipk() << endl;

    return 0;
}