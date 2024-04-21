#include <iostream>
using namespace std;

class Calculator {
private:
    float a;
    float b;

public:
    void setA(float value) {
        a = value;
    }

    float getA() {
        return a;
    }

    void setB(float value) {
        b = value;
    }

    float getB() {
        return b;
    }

    float tambah() {
        return a + b;
    }

    float kurang() {
        return a - b;
    }

    float kali() {
        return a * b;
    }

    float bagi() {
        if (b == 0) {
            throw "Error: Pembagian oleh nol tidak dapat dilakukan";
        }
        return a / b;
    }
};

int main() {
    Calculator calculator;
    float a, b;
    cout << "Program Operasi Aritmatika" << endl;
    cout << "Masukkan Nilai A = ";
    cin >> a;

    cout << "Masukkan Nilai B = ";
    cin >> b;
    cout << endl;

    calculator.setA(a);
    calculator.setB(b);

    try {
        cout << "Hasil penjumlahan " << calculator.tambah() << endl;
        cout << "Hasil pengurangan " << calculator.kurang() << endl;
        cout << "Hasil perkalian " << calculator.kali() << endl;
        cout << "Hasil pembagian " << calculator.bagi() << endl;
    } catch (const char* error) {
        cout << error << endl;
    }

    return 0;
}
