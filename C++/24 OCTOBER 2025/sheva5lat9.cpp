#include <iostream>
using namespace std;

int main(){
    int x;
    string nama;

    cout << "Masukkan Namamu : ";
    cin >> nama;

    cout << "Masukkan Nilaimu : ";
    cin >> x;

    if (x >= 75) {
        cout << "Selamat " << nama << " Anda Lulus" << endl;
    } else {
        cout << "Selamat " << nama << " Anda Tidak Lulus" << endl;
    }

    return 0;
}