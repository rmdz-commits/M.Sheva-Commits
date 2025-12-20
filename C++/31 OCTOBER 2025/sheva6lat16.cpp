#include <iostream>
using namespace std;

int main() {
    int x;
    string a,b,c,d,e;

    a = "Nasi Goreng";
    b = "Mie Goreng";
    c = "Soto Ayam";
    d = "Sate Ayam";
    e = "Bakso";

    cout << "1. " << a << endl;
    cout << "2. " << b << endl;
    cout << "3. " << c << endl;
    cout << "4. " << d << endl;
    cout << "5. " << e << endl;

    cout << "\nMasukkan Pesanan : ";
    cin >> x;

    switch (x) {
        case 1: cout << "Nama Pesanan : " << a << "\nHarga Pesanan : Rp150.000"; break;
        case 2: cout << "Nama Pesanan : " << b << "\nHarga Pesanan : Rp6.000"; break;
        case 3: cout << "Nama Pesanan : " << c << "\nHarga Pesanan : Rp300.000"; break;
        case 4: cout << "Nama Pesanan : " << d << "\nHarga Pesanan : Rp200.000"; break;
        case 5: cout << "Nama Pesanan : " << e << "\nHarga Pesanan : Rp175.000"; break;

        default: "Menu Tidak Tersedia";
    } 
    return 0;
}