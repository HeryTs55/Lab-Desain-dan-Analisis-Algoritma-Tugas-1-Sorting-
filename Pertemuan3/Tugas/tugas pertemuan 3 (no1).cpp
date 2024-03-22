#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Mahasiswa {
private:
    string nama;
    string npm;

public:
    Mahasiswa() : nama(""), npm("") {}

    Mahasiswa(string nama, string npm) : nama(nama), npm(npm) {}

    void setNama(string nama) {
        this->nama = nama;
    }

    void setNPM(string npm) {
        this->npm = npm;
    }

    string getNama() const {
        return nama;
    }

    string getNPM() const {
        return npm;
    }
};

int main() {
    int jumlahMahasiswa;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;
    cin.ignore(); // Membuang karakter newline yang tersisa

    vector<Mahasiswa> daftarMahasiswa;

    for (int i = 0; i < jumlahMahasiswa; ++i) {
        string nama, npm;
        cout << "Masukkan nama mahasiswa " << i + 1 << ": ";
        getline(cin, nama);
        cout << "Masukkan NPM mahasiswa " << i + 1 << ": ";
        getline(cin, npm);

        daftarMahasiswa.push_back(Mahasiswa(nama, npm));
    }

    for (int i = 0; i < jumlahMahasiswa; ++i) {
        cout << "\nMahasiswa " << i + 1 << endl;
        cout << "Nama\t: " << daftarMahasiswa[i].getNama() << endl;
        cout << "NPM\t: " << daftarMahasiswa[i].getNPM() << endl;
    }

    return 0;
}

