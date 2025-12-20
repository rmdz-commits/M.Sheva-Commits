#include <iostream>
using namespace std;

int main() {
    int a2[2][4];
    int i,j;
    
    for(i=0;i<5;i=i+1) {
        for(j=0;j<7;j=j+1) {
            a2[i][j] = 10 * i + j;
            cout << "Nilai a2[" << i << "," << j << "]=" << a2[i][j] << endl;
        }
    }
    return 0;
}