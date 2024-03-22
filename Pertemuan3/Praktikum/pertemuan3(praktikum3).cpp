#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
	private:
		string nama;
		string npm;
		
	public:
		void setNama(string n){
			nama = n;
		}
		
		void setNpm(string n){ 
			npm = n;
		}
		
		string getNama() {
			return nama;
		}
		
		string getNpm() {
			return npm;
		}
};

int main(){
	Mahasiswa mahasiswa;
	string nama, npm;
	
	cout << "Masukkan nama mahasiswa: ";
	getline(cin, nama);
	mahasiswa.setNama(nama);
	
	cout << "Masukkan NPM mahasiswa: ";
	getline(cin, npm);
	mahasiswa.setNpm(npm);
	
	cout << "\nData Mahasiswa: ";
	
	cout <<"\nNama: " << mahasiswa.getNama() << endl;
	cout <<"NPM: " << mahasiswa.getNpm() << endl;
	
	return 0;
}

