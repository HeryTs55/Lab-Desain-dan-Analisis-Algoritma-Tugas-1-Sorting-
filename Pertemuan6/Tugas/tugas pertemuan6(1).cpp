#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
protected:
    string nama;
    int usia;
    string jurusan;
    string fakultas;
    string status;

public:
    Mahasiswa(string nama, int usia, string jurusan, string fakultas, string status)
        : nama(nama), usia(usia), jurusan(jurusan), fakultas(fakultas), status(status) {}

    void tampilkanInfo() {
        cout << "Nama: " << nama << ", Usia: " << usia << ", Jurusan: " << jurusan << ", Fakultas: " << fakultas << ", Status: " << status << endl;
    }
};

int main() {
    string name[10], jrsn[10], fklts[10], sts[10];
    int age[10];
    
    Mahasiswa *mahasiswa[10];

    for (int i = 0; i < 5; ++i) {
        cout << "Masukkan status mahasiswa ke-" << i+1 << " (Alumni / Mahasiswa Aktif): ";
        getline(cin, sts[i]);
        cout << "Masukkan nama mahasiswa ke-" << i+1 << ": ";
        getline(cin, name[i]);
        cout << "Masukkan umur mahasiswa: ";
        cin >> age[i];
        cin.ignore();
        cout << "Masukkan jurusan mahasiswa: ";
        getline(cin, jrsn[i]);
        cout << "Masukkan fakultas mahasiswa: ";
        getline(cin, fklts[i]);

        mahasiswa[i] = new Mahasiswa(name[i], age[i], jrsn[i], fklts[i], sts[i]);
    }
    
    for(int i = 0; i < 5; i++) {
        cout << "\nInformasi mahasiswa ke-" << i+1 << ":" << endl;
        mahasiswa[i]->tampilkanInfo();
    }

    for(int i = 0; i < 5; i++) {
        delete mahasiswa[i];
    }

    return 0;
}

