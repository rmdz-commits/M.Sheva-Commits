#include <iostream>
using namespace std;

int main(){
    int x;
    string nama, npm, kelas, grade;

    
    cout << "Masukkan Nama : ";
    cin >> nama;
    cout << "Masukkan NPM : ";
    cin >> npm;
    cout << "Masukkan Kelas : ";
    cin >> kelas;

    cout << "Masukkan Nilai : ";
    cin >> x;

    if (x > 80 && x < 100) {
        grade = "A";
    } else if (x >= 70) {
        grade = "B";
    } else if (x >= 60) {
        grade = "C";
    } else if (x >= 50) {
        grade = "D";
    } else if (x >= 40) {
        grade = "E";
    } else if (x >= 0 && x <= 39) {
        grade = "F";
    } else {
        cout << "Out Of Range" << endl;
    }


    cout << "Nama : " << nama << endl;
    cout << "NPM : " << npm << endl;
    cout << "Kelas : " << kelas << endl;
    cout << "Nilai : " << x << endl;
    cout << "Grade : " << grade << endl;

    return 0;
}