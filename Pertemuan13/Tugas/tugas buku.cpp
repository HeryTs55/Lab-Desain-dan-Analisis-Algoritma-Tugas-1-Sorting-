#include <iostream>
#include <cstring>

using namespace std;

const int TABLE_SIZE = 10;

int table[TABLE_SIZE];
int hdt_boundary;

int hash1(int key) {
    return key % TABLE_SIZE;
}

int hash2(int key) {
    return 7 - (key % 7);
}

void tambah_double_hashing(int key) {
    int index = hash1(key);
    int step = hash2(key);
    int i = 0;

    while (table[(index + i * step) % TABLE_SIZE] != -1) {
        i++;
    }
    table[(index + i * step) % TABLE_SIZE] = key;
}

void cetak() {
    for (int i = 0; i < TABLE_SIZE; ++i) {
        if (table[i] != -1) {
            cout << "[ " << i << " ]" << " --> " << table[i] << endl;
        } else {
            cout << "[ " << i << " ]" << " --> Kosong" << endl;
        }
    }
}

int main() {
    memset(table, -1, sizeof(table));

    int n;
	
	cout << "Ukuran tabel : 10" << endl;
    cout << "Masukkan jumlah elemen yang akan disisipkan : ";
    cin >> n;

    hdt_boundary = n;

    cout << "Masukkan " << n << " elemen :" << endl;
    for (int i = 0; i < n; ++i) {
        int element;
        cin >> element;
        tambah_double_hashing(element);
    }

	cout << "\nHasil Output Hash Table Dengan Cara Double Hashing : " << endl;
    cetak();

    return 0;
}
