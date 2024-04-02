#include <iostream>
using namespace std;

class OperasiAritmatika {
private:
    float a, b;

public:
    void setA(float nilaiA) {
        a = nilaiA;
    }

    void setB(float nilaiB) {
        b = nilaiB;
    }

    float getA() {
        return a;
    }

    float getB() {
        return b;
    }

    void hitungOperasi() {
        float tambah, kurang, kali, bagi;
        tambah = a + b;
        kurang = a - b;
        kali = a * b;
        try {
            if (b == 0) {
                throw "\nError: Pembagian oleh nol tidak dapat dilakukan";
            }
            bagi = a / b;
            cout << "Hasil penjumlahan " << tambah << endl;
            cout << "Hasil pengurangan " << kurang << endl;
            cout << "Hasil perkalian " << kali << endl;
            cout << "Hasil pembagian " << bagi << endl;
        } catch (const char* error) {
            cout << error << endl;
        }
    }
};

int main() {
    OperasiAritmatika operasi;
    float nilaiA, nilaiB;

    cout << "Program Operasi Aritmatika" << endl;
    cout << "Masukkan Nilai A = ";
    cin >> nilaiA;
    operasi.setA(nilaiA);

    cout << "Masukkan Nilai B = ";
    cin >> nilaiB;
    operasi.setB(nilaiB);

    operasi.hitungOperasi();

    return 0;
}
