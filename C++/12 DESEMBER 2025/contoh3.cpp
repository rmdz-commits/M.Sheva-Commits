#include <iostream>
using namespace std;

int main () {
    int n[] = {32,27,64,18,95};

    cout << "Indeks Elemen" << " | " << "Nilai" << endl;

    for (int i=0;i<5;i++) { 
        cout << i << " --------------- " << n[i] << endl;
    }

    return 0;
}