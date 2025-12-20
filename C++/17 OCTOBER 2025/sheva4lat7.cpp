#include <iostream>

using namespace std;

int main () {

    int a,b; 
    float c,d; // untuk pembagian

    bool t = 1; // true
    bool f = 0; // false
    bool hasil;

    cout << "<><><><><><><><><><><><><><><><><><><><><>" << endl;

    cout << "Input Nilai a : ";
    cin >> a;

    cout << "Input Nilai b : ";
    cin >> b;

    c = a;
    d = b;

    cout << "<><><><><><><><><><><><><><><><><><><><><>" << endl;

    cout << "Hasil a + b = " << a + b << endl;
    cout << "Hasil a - b = " << a - b << endl;
    cout << "Hasil a x b = " << a * b << endl;
    cout << "Hasil a / b = " << c / d << endl;
    cout << "Hasil a % b = " << a % b << "%" << endl;

    cout << "<><><><><><><><><><><><><><><><><><><><><>" << endl;

    cout << "t = " << t << endl;
    cout << "f = " << f << endl;

    // logika AND
    hasil = t && f;
    cout << "t && f = " << hasil << endl;

    // logika OR
    hasil = t || f;
    cout << "t || f = " << hasil << endl;

    // logika NOT
    cout << "!t = " << !t << endl;

    cout << "<><><><><><><><><><><><><><><><><><><><><>" << endl;

    // Increment
    a++;
    b++;
    cout << "a++ = " << a << endl;
    cout << "b++ = " << b << endl;

    cout << "<><><><><><><><><><><><><><><><><><><><><>" << endl;

    // Increment lagi
    ++a;
    ++b;
    cout << "++a = " << a << endl;
    cout << "++b = " << b << endl;

    cout << "<><><><><><><><><><><><><><><><><><><><><>" << endl;

    // Decrement 
    a--;
    b--;
    cout << "a-- = " << a << endl;
    cout << "b-- = " << b << endl;

    cout << "<><><><><><><><><><><><><><><><><><><><><>" << endl;

    // Decrement lagi 
    --a;
    --b;
    cout << "--a = " << a << endl;
    cout << "--b = " << b << endl;

    return 0;
}