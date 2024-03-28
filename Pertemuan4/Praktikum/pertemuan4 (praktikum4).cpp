#include<iostream>
using namespace std;

class info{
	private:
		string a,b;
		int c;
	
	public:
		info(string nama, int umur, string alamt) 
		: a(nama), c(umur), b(alamt){
			cout<<"constructor dipanggil\n";
		}
	
		~info(){
			cout<<"\ndestruktor dipanggil ";
		}
		
		void data(){
			cout<<"Nama : "<<a<<endl
				<<"Umur : "<<c<<endl
				<<"Alamat : "<<b<<endl;
		}
};

int main(){
	int x;
	string y, z;
	
	cout<<"masukan nama anda: ";
		getline(cin,y);
		cout<<"Masukan usia anda: ";
		cin>>x;
		cout<<"masukan alamat anda: ";
		cin.ignore();
		getline(cin,z);
		
	{
		info obj(y, x, z);
		obj.data();
	}
	return 0;
}
