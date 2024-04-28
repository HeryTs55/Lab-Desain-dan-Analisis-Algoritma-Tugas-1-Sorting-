#include <iostream>
#include <algorithm>
using namespace std;

const int N = 100;
int nim[N];

//Fungsi untuk melakukan binary search
int binarySearch(int x, int l, int r) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (nim[mid] == x)
            return mid;
        if (nim[mid] > x)
            return binarySearch(x, l, mid - 1);
        return binarySearch(x, mid + 1, r);
    }
    // Kembalikan -1 jika elemen tidak ditemukan
    return -1;
}

int main() {
    // Contoh penggunaan binarySearch
    int n;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    cout << "Masukkan NIM Mahasiswa:" <<endl;
    for (int i = 0; i < n; i++){
    	cin >> nim[i];
	}
    
	// Mengurutkan NIM mahasiswa 
	sort(nim, nim + n);
	int x;
	cout << "Masukkan NIM yang dicari: ";
	cin>> x;
	
	int hasil = binarySearch (x, 0, n - 1);
	if (hasil == -1)
	cout << "Nim tidak ditemukan" << endl;
	
	else
	cout << " NIM ditemukan pada indeks " << hasil << endl;

    return 0;
}

