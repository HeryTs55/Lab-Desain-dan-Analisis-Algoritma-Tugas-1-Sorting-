#include <iostream>
using namespace std;

class GrafBerarah {
private:
    int** daftar_ketetanggaan;
    int jumlah_simpul;

public:
    GrafBerarah(int nodes) : jumlah_simpul(nodes) {
        daftar_ketetanggaan = new int*[jumlah_simpul];
        for (int i = 0; i < jumlah_simpul; ++i) {
            daftar_ketetanggaan[i] = new int[jumlah_simpul]();
        }
    }

    void tambahkan_sisi(int simpul1, int simpul2) {
        daftar_ketetanggaan[simpul1][simpul2] = 1;
    }

    void cetak_daftar_ketetanggaan() const {
        cout << "Daftar Ketetanggaan (Graf Berarah):" << endl;
        for (int simpul = 0; simpul < jumlah_simpul; ++simpul) {
            cout << "\nSimpul " << simpul << " : -> ";
            bool ada_tetangga = false;
            for (int tetangga = 0; tetangga < jumlah_simpul; ++tetangga) {
                if (daftar_ketetanggaan[simpul][tetangga] == 1) {
                    cout << tetangga;
                    ada_tetangga = true;
                    if (tetangga != jumlah_simpul - 1) {
                        cout << " -> ";
                    }
                }
            }
            if (!ada_tetangga) {
                cout << endl;
            }
        }
    }

    ~GrafBerarah() {
        for (int i = 0; i < jumlah_simpul; ++i) {
            delete[] daftar_ketetanggaan[i];
        }
        delete[] daftar_ketetanggaan;
    }
};

int main() {
    GrafBerarah graf(5);

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
