#include <iostream>
using namespace std;

class data{
	private:
		int usia[100];
		float ipk[100];
		string nama[100];
		
	public:
		data(int a[], string b[], double c[], int j){
			for (int m=0;m<j; m++){
					usia [m]= a[m];
			nama [m]= b[m];
			ipk [m]= c[m];
			}
		}
		
		string getnama(int index){
			return nama[index];
		}
		
		double getipk(int index){
			return ipk[index];
		}
		
		int getusia(int index){
			return usia[index];
		}
		
};

int main(){
	int usia[100],a;
	double ipk[100];
	string nama[100],b;
	
	string mahasiswa[100];
	cout<<"Masukan jumlah mahasiswa: ";
	cin>>a;
	cin.ignore(); 
	
	for(int i=0;i<a;i++){
		cout<<"Mahasiswa ke "<<i+1<<endl;
		cout<<"Nama: ";
		getline(cin, b);
		cout<<"Usia: ";
		cin>>usia [i];
		cout<<"IPK: ";
		cin>>ipk[i];
		cin.ignore();
		nama [i]=b;
	}
	
	data mhs(usia,nama,ipk, a);
	
	cout << "Nama: " << mhs.getnama(0) << endl;
	cout << "Usia: " << mhs.getusia(0) << endl;
	cout << "IPK: " << mhs.getipk(0) << endl;
}

