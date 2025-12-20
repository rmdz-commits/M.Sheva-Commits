#include <iostream>
using namespace std;

int main () {
    int size = 10;

    int n[size];
    for (int i=0;i<size;i++) { 
        n[i] = 0; 
    }

    cout << "Indeks Elemen" << " | " << "Nilai" << endl;

    for (int i=0;i<size;i++) { 
        cout << i << " --------------- " << n[i] << endl;
    }

    return 0;
}