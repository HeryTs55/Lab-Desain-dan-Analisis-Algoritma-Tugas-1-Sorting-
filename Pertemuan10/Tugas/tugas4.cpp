#include <iostream>
#include <vector>
using namespace std;

struct Sisi {
    int simpul_tujuan;
    int bobot;

    Sisi(int tujuan, int nilai_bobot) : simpul_tujuan(tujuan), bobot(nilai_bobot) {}
};

class Graf {
private:
    vector<vector<Sisi> > daftar_ketetanggaan;

public:
    Graf(int jumlah_simpul) {
        daftar_ketetanggaan.resize(jumlah_simpul);
    }

    void tambahkan_sisi(int simpul1, int simpul2, int bobot) {
        daftar_ketetanggaan[simpul1].push_back(Sisi(simpul2, bobot));
    }

    void cetak_daftar_ketetanggaan() const {
       cout << "Daftar Ketetanggaan (Graf berbobot):" << endl;
        for (int simpul = 0; simpul < daftar_ketetanggaan.size(); ++simpul) {
            cout << "Simpul " << simpul << " : ";
            if (daftar_ketetanggaan[simpul].size() == 0) {
                cout << endl;
                continue;
            }
            cout << "-> ";
            for (int i = 0; i < daftar_ketetanggaan[simpul].size(); ++i) {
                cout << " (" << daftar_ketetanggaan[simpul][i].simpul_tujuan << ", " << daftar_ketetanggaan[simpul][i].bobot << ")";
                if (i < daftar_ketetanggaan[simpul].size() - 1) {
                    cout << " -> ";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    Graf graf(5);

    graf.tambahkan_sisi(0, 1, 10);
    graf.tambahkan_sisi(0, 4, 20);
    graf.tambahkan_sisi(1, 2, 30);
    graf.tambahkan_sisi(1, 3, 40);
    graf.tambahkan_sisi(1, 4, 50);
    graf.tambahkan_sisi(2, 3, 60);
    graf.tambahkan_sisi(3, 4, 70);

    graf.cetak_daftar_ketetanggaan();

    return 0;
}
