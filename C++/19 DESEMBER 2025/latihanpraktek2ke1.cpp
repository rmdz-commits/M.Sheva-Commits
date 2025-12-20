#include <iostream>
using namespace std;

class Mobil {
    private:
    float kecepatan;

    public:
    string merek;
    int tahun;

    void setKecepatan(float speed) {
        kecepatan = speed;
    }

    float getKecepatan() {
        return kecepatan;
    }
};

int main () {
    Mobil mb;

    mb.merek = "Toyota Supra";
    mb.tahun = 2014;
    mb.setKecepatan(238.54);

    cout << "Merek : " << mb.merek << endl;
    cout << "Tahun : " << mb.tahun << endl;
    cout << "Kecepatan : " << mb.getKecepatan() << " Km/h" << endl;

    return 0;
}