#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

const int TABLE_SIZE = 1204;

int storage[TABLE_SIZE] = {0};
int hdt_boundary;

void tambah_double_hashing(int n)
{
    int hash;
    for (int i = 0; i < hdt_boundary; ++i)
    {
        hash = (n + i) % hdt_boundary;

        if (storage[hash] == 0)
        {
            storage[hash] = n;
            return;
        }
    }
}

void cetak()
{
    cout << "\nIsi Tabel Hash :" << endl;
    for (int i = 0; i < hdt_boundary; i++)
    {
        if (storage[i] != 0)
        {
            cout << i << " --> " << storage[i] << endl;
        }
        else
        {
            cout << i << " --> Kosong" << endl;
        }
    }
}

void search(int key)
{
    for (int i = 0; i < hdt_boundary; ++i)
    {
        if (storage[i] == key)
        {
            cout << key << " ditemukan dalam tabel hash." << endl;
            return;
        }
    }
    cout << key << " tidak ditemukan dalam tabel hash." << endl;
}

int main()
{
    int tablesize, element, data;

    srand(static_cast<unsigned>(time(0)));

    cout << "Masukkan ukuran tabel hash : ";
    cin >> tablesize;

    cout << "Masukkan jumlah elemen yang akan disisipkan : ";
    cin >> element;

    hdt_boundary = tablesize;

    cout << "Masukkan " << element << " elemen :" << endl;
    for (int i = 0; i < element; ++i)
    {
        cin >> data;
        tambah_double_hashing(data);
    }

    cetak();

    cout << "\nMasukkan elemen yang ingin dicari dalam tabel hash : ";
    cin >> data;

    search(data);

    return 0;
}
