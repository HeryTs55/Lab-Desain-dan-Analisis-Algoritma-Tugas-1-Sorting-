#include <iostream>
using namespace std;

class Bentuk {
protected:
    int lebar, tinggi;

public:
    virtual void masukkan_data(int a, int b) = 0;
    virtual int luas() = 0;
};

class PersegiPanjang : public Bentuk {
private:
    int panjang, lebar;

public:
    void masukkan_data(int a, int b) {
        panjang = a;
        lebar = b;
    }
    int luas() {
        return panjang * lebar;
    }
};

class Segitiga : public Bentuk {
private:
    int alas, tinggi;

public:
    void masukkan_data(int a, int b) {
        alas = a;
        tinggi = b;
    }
    int luas() {
        return 0.5 * alas * tinggi;
    }
};

class Persegi : public Bentuk {
private:
    int sisi;

public:
    void masukkan_data(int a, int b) {
        sisi = a;
    }
    int luas() {
        return sisi * sisi;
    }
};

int main() {
    PersegiPanjang pp;
    Segitiga sg;
    Persegi pr;
    int panjang, lebar, alas, tinggi, sisi;

    cout << "Masukkan panjang persegi panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> lebar;
    

    cout << "Masukkan alas segitiga: ";
    cin >> alas;
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;
    
    cout << "Masukkan panjang sisi persegi: ";
    cin >> sisi;
    
    pp.masukkan_data(panjang, lebar);
    cout << "Luas persegi panjang adalah: " << pp.luas() << endl;
    sg.masukkan_data(alas, tinggi);
    cout << "Luas segitiga adalah: " << sg.luas() << endl;
    pr.masukkan_data(sisi, sisi);
    cout << "Luas persegi adalah: " << pr.luas() << endl;

    return 0;
}

