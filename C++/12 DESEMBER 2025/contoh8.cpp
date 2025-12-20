#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Program Matrix" << endl << "si Anu" << endl << endl;
    int a[25][25];
    int kolom,baris;
    cout << "Masukkan Jumlah Baris : ";
    cin >> baris;
    cout << "Masukkan Jumlah Kolom : ";
    cin >> kolom;

    for(int i=1;i<=baris;i++) {
        for(int b=1;b<=kolom;b++) {
            cout << "Masukkan Data Baris Ke : " << i << " Kolom Ke " << b << " : ";
            cin >> a[i][b];

        }
    }

    cout << endl << "Tampilkan " << endl << endl;
    for(int i=1;i<=baris;i++) {
        for(int b=1;b<=kolom;b++) {
            cout << a[i][b] << " ";
        }
        cout << endl;
    }
    return 0;
}