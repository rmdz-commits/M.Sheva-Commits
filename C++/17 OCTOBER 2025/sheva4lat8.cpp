#include <iostream>
using namespace std;

int main() {

    int alas, tinggi, temp;
    float luas;

    cout << "Input Nilai Alas : ";
    cin >> alas;

    cout << "Input Nilai Tinggi : ";
    cin >> tinggi;

    temp = alas * tinggi;
    luas = temp * 0.5;

    cout << "Luas Segitiga Adalah : " << luas << endl;

    return 0;
}