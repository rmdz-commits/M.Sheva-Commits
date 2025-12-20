#include <iostream>
using namespace std;

struct Barang
{
    int kode, stok;
    float harga;
    string nama;
};

int main() {
    int x;

    cout << "Masukkan Jumlah Barang : ";
    cin >> x;

    Barang brg[x];

    cout << "\nKode | Nama Barang | Harga | Stok" << endl;
    
        for(int i=0 ; i <=x ; i++) {
        cout << "Masukkan Kode Barang : ";
        cin >> brg->kode;

        cout << "Masukkan Nama Barang : ";
        getline(cin, brg->nama);

        cout << "Masukkan Harga Barang : ";
        cin >> brg->harga;

        cout << "Masukkan Jumlah Stok Barang : ";
        cin >> brg->stok;
        }

return 0;
}
