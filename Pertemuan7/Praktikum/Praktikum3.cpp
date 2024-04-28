#include<iostream>
using namespace std;


struct Barang {
    string nama;
    int harga;
};

int main() {

    Barang daftarBarang[5] = {
        {"Buku", 5000},
        {"Pensil", 1000},
        {"Pulpen", 2000},
        {"Penghapus", 500},
        {"Penggaris", 1500}
    };

    string brg;
	cout << "Masukkan nama barang yang ingin dicari = ";
    cin>>brg;
    
    bool ditemukan = false;
    for(int i = 0; i < 5; i++) {
    	if(daftarBarang[i].nama == brg){
    		cout <<"Barang " << daftarBarang[i].nama << " ditemukan dengan harga " <<daftarBarang[i].harga << endl;
    		ditemukan = true;
    		break;
    	if(!ditemukan){
    		cout <<" maaf, Barang "<< brg << " tidak ditemukan dengan harga ";
    		break;
		}
    		;
		}
		}
       
    

    return 0;
}

