#include <iostream>
using namespace std;

class Mobil {
    private:
    float kecepatan;
    string merek;
    int tahun;

    public:
    char x;
    void udin(float speed) {
        kecepatan = speed;
    }

    float ucup() {
        return kecepatan;
    }

    void inputMobill() {
        cout << "Masukkan Merek Mobil : ";
        getline(cin, merek);
        cout << "Masukkan Tahun Mobil : ";
        cin >> tahun;
        cout << "Masukkan Kecepatan : ";
        cin >> kecepatan;
        cout << "Lanjut Mengisi Data?[Y/N]: ";
        getline(cin,x);
    }

    void showMobill() {
        cout << merek << " " << tahun << " " << ucup() << endl;
    }
};

int main() {
    Mobil mb;
    
    do {
        mb.inputMobill();
    } while (mb.x == 'y' || mb.x == 'Y');

    cout << "Merek" << " Tahun" << " Kecepatan" <<endl;
    for(int i=0;)
    

    return 0;
}