#include <iostream>
#include <vector>

using namespace std;

class Graf {
private:
    vector<vector<int> > daftar_ketetanggaan;
    int jumlah_simpul;

public:
    Graf(int jumlah_simpul) : jumlah_simpul(jumlah_simpul) {
        daftar_ketetanggaan.resize(jumlah_simpul);
    }

    void tambahkan_sisi(int simpul1, int simpul2) {
        daftar_ketetanggaan[simpul1].push_back(simpul2);
        daftar_ketetanggaan[simpul2].push_back(simpul1);
    }

    void cetak_daftar_ketetanggaan() const {
        cout << "Daftar Ketetanggaan (Graf tidak Berarah):" << endl;
        for (int simpul = 0; simpul < jumlah_simpul; ++simpul) {
            cout << "Simpul " << simpul << " : -> ";
            int jumlah_neighbor = daftar_ketetanggaan[simpul].size();
            for (int i = 0; i < jumlah_neighbor; ++i) {
                cout << daftar_ketetanggaan[simpul][i];
                if (i != jumlah_neighbor - 1) {
                    cout << " -> ";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    Graf graf(5);

    graf.tambahkan_sisi(0, 1);
    graf.tambahkan_sisi(0, 4);
    graf.tambahkan_sisi(1, 2);
    graf.tambahkan_sisi(1, 3);
    graf.tambahkan_sisi(1, 4);
    graf.tambahkan_sisi(2, 3);
    graf.tambahkan_sisi(3, 4);

    graf.cetak_daftar_ketetanggaan();

    return 0;
}
