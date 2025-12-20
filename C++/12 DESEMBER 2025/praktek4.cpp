#include <iostream>
using namespace std;

struct PersegiPanjang
{
    float panjang, lebar;
};

float hitungLuas(PersegiPanjang ls) {
    return ls.panjang * ls.lebar;
}

int main() {
    PersegiPanjang ls;

    cout << "Masukkan Panjang : ";
    cin >> ls.panjang;
    cout << "Masukkan Lebar : ";
    cin >> ls.lebar;

    cout << "\nLuas Persegi Panjang : " << hitungLuas(ls) << endl;

    return 0;
}