#include<iostream>

using namespace std;

// Definisi kelas contoh
class contoh {
	private:
		int nilai; // Variabel anggota untuk menyimpan nilai
		
	public:
		// Konstruktor untuk inisialisasi nilai
		contoh(int n) {
			nilai = n;
		}
		
		// Fungsi untuk mengambil nilai
		int getNum() {
			return nilai;
		}
};

int main() {
	// Membuat objek contoh dengan nilai 10
	contoh obj(10);
	
	// Mencetak nilai yang diinput menggunakan fungsi getNum
	cout << "nilai yang di input: " << obj.getNum() << endl;

	return 0; // Mengembalikan nilai 0 sebagai tanda berhasilnya program
}

