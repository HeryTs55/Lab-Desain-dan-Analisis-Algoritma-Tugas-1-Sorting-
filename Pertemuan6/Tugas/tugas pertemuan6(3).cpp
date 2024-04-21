#include <iostream>
using namespace std;


class Kendaraan {
	public:
    string merek;
    int tahunProduksi;
    
    Kendaraan(string _merek, int _tahunProduksi) : merek(_merek), tahunProduksi(_tahunProduksi) {}

    void info() {
        cout << "Merek: " << merek << endl;
        cout << "Tahun Produksi: " << tahunProduksi << endl;
    }
};

class Mobil : public Kendaraan {
public:
    int jumlahPintu;

    Mobil(string _merek, int _tahunProduksi, int _jumlahPintu) : Kendaraan(_merek, _tahunProduksi), jumlahPintu(_jumlahPintu) {}

    void info() {
        Kendaraan::info();
        cout << "Jumlah Pintu: " << jumlahPintu << endl;
    }
};

int main() {
    string merek;
    int tahunProduksi, jumlahPintu;

    cout << "Masukkan merek mobil: ";
    getline(cin, merek);
    cout << "Masukkan tahun produksi mobil: ";
    cin >> tahunProduksi;
    cout << "Masukkan jumlah pintu mobil: ";
    cin >> jumlahPintu;

    Mobil mobil(merek, tahunProduksi, jumlahPintu);

    cout << "\n\nInformasi Mobil:" << endl;
    mobil.info();

    return 0;
}

