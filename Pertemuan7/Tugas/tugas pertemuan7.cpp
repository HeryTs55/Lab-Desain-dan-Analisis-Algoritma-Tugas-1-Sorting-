#include <iostream>
#include <string>

using namespace std;

int biner(string arr[], int n, int choice) {
    if (choice >= 1 && choice <= n)
        return choice - 1;
    else
        return -1;
}

int main()
{
    string arr[] = {"Sejarah", "Sastra", "Komik", "Cerita Pendek", "Novel", "Biografi", "Fiksi Ilmiah", "Kamus", "IPA", "IPS"};

    int a = 10;
    int choice;
    string judul;

    cout << "Genre buku:" << endl;
    cout << "1. Sejarah\n2. Sastra\n3. Komik\n4. Cerita Pendek\n5. Novel\n6. Biografi\n7. Fiksi Ilmiah\n8. Kamus\n9. IPA\n10. IPS\n";
    cout << "Pilihan anda: ";

    cin >> choice;
    cin.ignore(); 

    int i  = biner(arr, a, choice);

    if (i != -1) {
        cout << "Masukkan Judul Buku " << arr[i] << " : ";
        getline(cin, judul);

        int rack = biner(arr, a, choice);

        if (rack != -1)
            cout << "Buku " << judul << " berada di rak ke-" << rack+ 1 << "." << endl;
        else
            cout << "Buku " << judul << " tidak ditemukan" << endl;
    } else {
        cout << "Pilihan tidak valid." << endl;
    }

    return 0;
}
