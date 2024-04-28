#include<iostream>
using namespace std;

int main () {
	//deklarasi variabel
	int nilai[20];
	int posisi[20];
	int i, n, Bil, jmlh=0;
	bool ketemu = false;
	
	cout <<"Masukkan jumlah deret bilangan = ";
	cin>>n;
	cout<<endl;
	
	//membaca elemen Array
	for (i=0; i<n; i++){
		cout <<"Nilai bilangan ke-"<<i<<" = ";
	}
	
	//Mencetak Elemen Array
	cout<<"\n\nDeret Bilangan = ";
	for (i=0; i<n; i++)
	cout<< nilai[i]<< " ";
	
	cout<<"\n\nMasukkan Bilangan yang akan Dicari =";
	cin>>Bil;
	
	//Melakukan Pencarian
	for (i=0; i<n; i++){
		if(nilai[i]==Bil){
			ketemu = true;
			posisi[jmlh]=i;
			jmlh++;
		}
	}
	if (ketemu){
		cout << "Bilangan "<<Bil<<" Ditemukan sebanyak"<<jmlh;
		cout<<"\npada posisi ke = ";
		for(i=0; i<<jmlh; i++)
		cout<< posisi[i]<< " ";
	}
	
	else
	 cout<<"Maaf, bilangan "<<Bil<<" tidak ditemukan";
	 
	getchar();
	return 0;
}
