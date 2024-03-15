#include <iostream>
using namespace std;

void TampilArray(char nilai[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << nilai[i] << ' ';
    }
    cout << endl;
}

void bubbleSort(char nilai[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (nilai[j] > nilai[j + 1])
            {
                char temp = nilai[j];
                nilai[j] = nilai[j + 1];
                nilai[j + 1] = temp;

                // Tampilkan proses sorting
                cout << "Proses sorting\n";
                TampilArray(nilai, n);
            }
        }
    }
}

int main()
{
    char nilai[10];
    int n;

    cout << " \n ================================== " << endl;
    cout << " \n Masukkan Banyaknya Array = ";
    cin >> n;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << " \n Masukkan angka ke " << i + 1 << " : ";
        cin >> nilai[i];
    }

    cout << "\nProses sorting\n";
    TampilArray(nilai, n);

    bubbleSort(nilai, n);

    cout << "\nHasil akhir : ";
    TampilArray(nilai, n);

    return 0;
}


