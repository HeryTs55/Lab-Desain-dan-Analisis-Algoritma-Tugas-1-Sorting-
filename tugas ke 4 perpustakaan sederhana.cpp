#include <iostream>
#include <string>

using namespace std;

void TampilArray(string buku[], int n) 
{
    int i, j;
    string tmp;
    for (i = 0; i < n; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(buku[j] > buku[j + 1]) { 
                tmp = buku[j];
                buku[j] = buku[j + 1];
                buku[j + 1] = tmp;
            }
        }
    }
}

int main()
{
    int n;
    string Buku[100];

    cout << "==================================\n";
    cout << "Masukkan Banyaknya Judul Buku = ";
    cin >> n;
    cin.ignore();
    
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Judul Buku Ke-" << i + 1 << " : ";
        getline(cin, Buku[i]);
    }

    cout << "\n\nData Setelah Sorting :\n";
    TampilArray(Buku, n);
    for (int i = 0; i < n; i++) {
        cout << Buku[i] << endl;
    }
    cout << endl;

    return 0;
}
