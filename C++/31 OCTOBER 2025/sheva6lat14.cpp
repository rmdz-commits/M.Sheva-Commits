#include <iostream>
using namespace std;

int main() {
    int nilai;
    string nama;

    cout << "Masukkan Nama Mahasiswa : ";
    cin >> nama;
    cout << "Masukkan Nilai Mahasiswa : ";
    cin >> nilai;
    cout << "<><><><><><><><><><><><><><><><><>" << endl;

    if (nilai > 100) {
        cout << "Nama : " << nama << "\nGrade : Out Of Range" << endl;
    } else if (nilai < 0) {
        cout << "Nama : " << nama << "\nGrade : Out Of Range" << endl;
    } else {
    switch (nilai / 10) {
        case 10: 
        case 9: 
        case 8: cout << "Nama : " << nama << "\nGrade : A"; break;
        case 7: cout << "Nama : " << nama << "\nGrade : B"; break;
        case 6: cout << "Nama : " << nama << "\nGrade : C"; break;
        case 5: cout << "Nama : " << nama << "\nGrade : D"; break;
        
        default: cout << "Nama : " << nama << "\nGrade : E"; break;
    }
  }
  return 0;
}