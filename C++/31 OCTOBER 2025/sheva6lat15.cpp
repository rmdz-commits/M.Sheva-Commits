#include <iostream>
using namespace std;

int main() {
    int bulan,tahun,tanggal;

    cout << "Masukkan Input Tanggal = ";
    cin >> tanggal;
    cout << "Masukkan Input Bulan [1-12] = ";
    cin >> bulan;
    cout << "Masukkan Input Tahun = ";
    cin >> tahun;


    switch (bulan) {
        case 1: cout << tanggal << " - Januari - " << tahun; break;
        case 2: cout << tanggal << " - Februari -" << tahun; break;
        case 3: cout << tanggal << " - Maret - " << tahun; break;
        case 4: cout << tanggal << " - April - " << tahun; break;
        case 5: cout << tanggal << " - Mei - " << tahun; break;
        case 6: cout << tanggal << " - Juni - " << tahun; break;
        case 7: cout << tanggal << " - Juli - " << tahun; break;
        case 8: cout << tanggal << " - Agustus - " << tahun; break;
        case 9: cout << tanggal << " - September - " << tahun; break;
        case 10: cout << tanggal << " - Oktober - " << tahun; break;
        case 11: cout << tanggal << " - November - " << tahun; break;
        case 12: cout << tanggal << " - Desember - " << tahun; break;

        default: cout << "Input Tidak Valid";
    }
    return 0;
}