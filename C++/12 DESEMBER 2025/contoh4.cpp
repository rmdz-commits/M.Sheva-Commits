#include <iostream>
using namespace std;

int main() {
    const int size = 12;
    int n[size] = {1,3,5,7,9,4,5,6,44,6,88,45};
    int total = 0;
    
    for(int i=0;i<size;i++) {
        total = total + n[i];
    }

    cout << "Total Nilai = " << total << endl;
    cout << "Rata - Rata = " << total / size << endl;

    return 0;
}