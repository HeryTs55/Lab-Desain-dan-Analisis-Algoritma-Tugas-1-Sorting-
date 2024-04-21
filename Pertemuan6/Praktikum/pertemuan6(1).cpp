#include<iostream>
using namespace std;

class karyawan {
	
	private:
		int gaji;
		
		public:
			void setGaji (int s) { 
			gaji = s;
			}
			int getGaji () {
				return gaji;
			}
};

int main () {
	
	karyawan myObj;
	myObj.setGaji(50000);
	cout << myObj.getGaji();
	return 0;
}
