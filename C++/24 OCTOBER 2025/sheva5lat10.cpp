#include <iostream>
using namespace std;

int main(){
    int x;

    cout << "Masukkan Nilai X : ";
    cin >> x;

    if (x >= 0) {
        cout << x << " Adalah Bilangan Positif" << endl;
    } else {
        cout << x << " Adalah Bilangan Negatif" << endl;
    }

    return 0;
}