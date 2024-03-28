#include <iostream>
#include <string>
using namespace std;

class Contact {
private:
    string name;
    string phoneNumber;

public:
    Contact() {}

    Contact(string name, string phoneNumber) {
        this->name = name;
        this->phoneNumber = phoneNumber;
    }

    string getName() {
        return name;
    }

    string getPhoneNumber() {
        return phoneNumber;
    }
};

int main() {
    const int maxContacts = 10;
    Contact contacts[maxContacts];
    int contactCount = 0;
    string choice;

    cout << "Masukkan kontak (maksimal 10 kontak):" << endl;

    while (contactCount < maxContacts) {
        string name, phoneNumber;
        cout << "\nMasukkan nama kontak ke-" << (contactCount + 1) << ": ";
        getline(cin, name);
        cout << "Masukkan nomor telepon kontak ke-" << (contactCount + 1) << ": ";
        getline(cin, phoneNumber);

        contacts[contactCount] = Contact(name, phoneNumber);
        contactCount++;

        cout << "Kontak berhasil ditambahkan." << endl;
        cout << "Tambahkan kontak lagi (y/n): ";
        getline(cin, choice);
        if (choice != "y" && choice != "Y") {
            break;
        }
    }
    
    cout << "Daftar kontak:";
    
    for (int i = 0; i < contactCount; i++) {
        cout << "\nKontak ke-:" << (i + 1) << "\nNama: " << contacts[i].getName() << "\nNomor Telepon: " << contacts[i].getPhoneNumber() << endl;
    }
    
    return 0;
}

