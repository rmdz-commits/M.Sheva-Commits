#include <iostream>
#include <string>

using namespace std;
int main(){
    string name;
    int usia;
    char jk;

    cout << "Masukkan Nama : ";
    getline(cin, name);

    cout << "Berapa Usia Anda : ";
    cin >> usia;

    cout << "Jenis Kelamin [L/P] : ";
    cin >> jk;

    cout << "Nama Saya Adalah, " << name << endl;
    cout << "Usia Saya Adalah, " << usia << endl;
    cout << "Jenis Kelamin Saya Adalah, " << jk << endl;

    return 0;
}