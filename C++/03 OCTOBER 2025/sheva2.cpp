#include <iostream>
#include <string>
#include <thread>   
#include <chrono>   

using namespace std;


void ketik(const string& teks, int delay_ms = 50) {
    for (char c : teks) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(delay_ms));
    }
    cout << endl;
}

int main() {
    string nama = "Muhammad Sheva Raditya";
    string prodi = "Teknik Informatika";
    string npm = "2511010121";
    int umur = 18;

    ketik("Hello Darmajaya", 70);
    this_thread::sleep_for(chrono::milliseconds(400));

    ketik("<><><><><><><><><><><><><><><><><>", 5);
    this_thread::sleep_for(chrono::milliseconds(300));

    ketik("Nama Saya, " + nama, 50);
    this_thread::sleep_for(chrono::milliseconds(200));

    ketik("NPM Saya, " + npm, 50);
    this_thread::sleep_for(chrono::milliseconds(200));

    ketik("Saya Memilih " + prodi + " Sebagai Program Studi Saya!", 50);
    this_thread::sleep_for(chrono::milliseconds(200));

    ketik("Usia Saya Sekarang Adalah " + to_string(umur) + "th", 50);

    return 0;
}