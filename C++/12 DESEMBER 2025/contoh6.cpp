#include <iostream>
using namespace std;

int main() {
    const int size = 12;
    int n[size] = {1,3,5,7,9,4,5,6,44,6,88,45};
    int Bil;

    cout << "Masukkan Nilai Yang Ingin Dicari : ";
    cin >> Bil;
    
    for(int i=0;i<size;i++) {
        if (n[i] == Bil) {
            cout << Bil << " is Found!" << endl; break;
        }
    }

    return 0;
}