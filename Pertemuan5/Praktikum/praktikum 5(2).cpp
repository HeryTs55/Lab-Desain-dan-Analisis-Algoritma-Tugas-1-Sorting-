#include <iostream>
using namespace std;

int main() {
    char operasi, lanjut;
    int angka1, angka2, hasil;

    do {
        cout << "Masukkan dua angka: ";
        cin >> angka1 >> angka2;

        cout << "Pilih operasi (+ untuk tambah, - untuk kurang, * untuk kali, / untuk bagi): ";
        cin >> operasi;

        switch(operasi) {
            case '+':
                hasil = angka1 + angka2;
                cout << "Hasil pertambahan: " << hasil << endl;
                break;
            case '-':
                hasil = angka1 - angka2;
                cout << "Hasil pengurangan: " << hasil << endl;
                break;
            case '*':
                hasil = angka1 * angka2;
                cout << "Hasil perkalian: " << hasil << endl;
                break;
            case '/':
                if(angka2 != 0) {
                    hasil = angka1 / angka2;
                    cout << "Hasil pembagian: " << hasil << endl;
                } else {
                    cout <<"Eror: \nHasil Pembagian: Pembagian dengan nol tidak bisa dilakukan." << endl;
                }
                break;
            default:
                cout << "EROR:" << endl;
        }

        cout << "Apakah Anda ingin melanjutkan (y/n): ";
        cin >> lanjut;
    } while(lanjut == 'y' || lanjut == 'Y');

    return 0;
}

