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
        cin >> brg->kode;
        cin.ignore();

        getline(cin, brg->nama);

        cin >> brg->harga;

        cin >> brg->stok;
        }

return 0;
}
