#include <iostream>
using namespace std;

int main() {
    char huruf;

    cout << "Masukkan Input [A-E]: ";
    cin >> huruf;

    switch (huruf) {
        case 'A': cout << "A = 90"; break;
        case 'B': cout << "A = 80"; break;
        case 'C': cout << "A = 70"; break;
        case 'D': cout << "A = 60"; break;
        case 'E': cout << "A = 50"; break;

        default: cout << "Input Tidak Valid";
    }
    return 0;
}