#include<iostream>
using namespace std;

struct Tiket {
    int nomor;
    string nama;
    Tiket *berikutnya;
} *head, *tikett, *temp, *crrnt, *rear;

bool isEmpty() {
    return head == NULL;
}

void addq(Tiket *tikett) {
    if (isEmpty()) {
        head = rear = tikett;
    } else {
        rear->berikutnya = tikett;
        rear = tikett;
    }
    cout << "\nTiket untuk " << tikett->nama << " sudah terdaftar!\n";
}

void newTiket(int num) {
    string nama;

    cout << "\nMasukkan Nama Pelanggan: ";
    cin >> nama;

    tikett = new Tiket();
    tikett->nomor = num;
    tikett->nama = nama;
    tikett->berikutnya = NULL;

    addq(tikett);
}

void exit() {
    if (isEmpty()) {
        cout << "\nTidak ada tiket dalam antrian!" << endl;
    } else {
        crrnt = head;
        cout << "\nMengeluarkan tiket " << crrnt->nomor << " untuk " << crrnt->nama << endl;
        head = head->berikutnya;
        delete crrnt;
    }
}

void display() {
    if (isEmpty()) {
        cout << "\nAntrian Tiket kosong\n" << endl;
    } else {
        cout << "\nAntrian Tiket: \n";
        crrnt = head;
        while (crrnt != NULL) {
            cout << "Tiket " << crrnt->nomor << ": " << crrnt->nama << endl;
            crrnt = crrnt->berikutnya;
        }
    }
}

void clear() {
    crrnt = head;
    while (crrnt != NULL) {
        temp = crrnt;
        temp->berikutnya = NULL;
        crrnt = crrnt->berikutnya;
        delete temp;
    }
    head = NULL;
    rear = NULL;
    cout << "\nAntrian tiket telah dibersihkan.\n" << endl;
}

int main() {
    head = rear = NULL;
    char choice;
    bool run = true;
    int num = 1;

    while (run) {
        cout << "\n--Pengambilan Tiket Loket--" << endl;
        cout << "1. Daftarkan Tiket Baru" << endl;
        cout << "2. Mengambil Tiket" << endl;
        cout << "3. Lihat Antrian Tiket" << endl;
        cout << "4. Keluar dari Sistem" << endl;
        cout << "Masukkan pilihan Anda: ";
        cin >> choice;
        switch (choice) {
            case '1':
                newTiket(num);
                num++;
                break;
            case '2':
                exit();
                break;
            case '3':
                display();
                break;
            case '4':
                cout << "Keluar dari sistem." << endl;
                run = false;
                break;
            default:
                cout << "Input tidak valid." << endl;
                break;
        }
    }

    return 0;
}

