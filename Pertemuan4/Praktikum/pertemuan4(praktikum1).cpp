#include<iostream>
#include<string>

using namespace std;

class pelajaran {
	public:
		pelajaran () {
			cout << "Ini adalah materi c++ tentang Constructors!";
		}
};

int main(){
	pelajaran obj;
	return 0;
}
