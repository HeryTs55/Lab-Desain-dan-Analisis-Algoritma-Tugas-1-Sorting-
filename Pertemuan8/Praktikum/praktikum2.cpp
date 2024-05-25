#include<iostream>
using namespace std;

struct antrian{
    int nomorAntrian;
    string nama;
    antrian *next;
} *head, *newNode, *temporaryNode, *currentnode, *tail;


void antrianbaru(int);
void enqueue(antrian *);
void dequeue();
void cetakAntrian();
bool isEmpty();
void clear();

int main(){
    head = tail = NULL;
    char pilihan;
    bool ongoing = true;
    int nomorAntrian = 1;

    while(ongoing){
        cout << endl;
        cout << "SISTEM PENCERNAAN" << endl;
        cout << "1. Makan Makanan Baru" << endl;
        cout << "2. Cerna makanan" << endl;
        cout << "3. Mengingat Makanan Apa" << endl;
        cout << "4. Exit Sistem" << endl;
        cout << "Pilih Opsi: ";
        cin >> pilihan;
        switch (pilihan){
            case '1':
                antrianbaru(nomorAntrian);
                nomorAntrian++;
                break;
            case '2':
                dequeue();
                break;
            case '3':
                cetakAntrian();
                break;
            case '4':
                cout << "Program selesai." << endl;
                ongoing = false;
                break;
          
        }
    }

     return 0;
} 
void antrianbaru(int nomorAntrian){
    string inputNama;

    cout << "masukkan makan: ";
    cin >> inputNama;

    newNode = new antrian();
    newNode->nomorAntrian = nomorAntrian;
    newNode->nama = inputNama;
    newNode->next = NULL;

    enqueue(newNode);
}

bool isEmpty(){
    if(head == NULL){
        return true;
    } else {
        return false;
    }
}

void enqueue(antrian *newNode){
    if(isEmpty()){
    	
        head = tail = newNode;
    }else{

        tail->next = newNode;
        tail = newNode;
    }
    cout<< newNode->nama << " dimakan!";
   
}

void dequeue(){
    if(isEmpty()){
        cout << "\nPerut Kosong, Lapar!" << endl;
    }else{
        currentnode = head;
        
        cout << " memakan " << currentnode->nama << endl; 
        head = head->next;
    }
}

void cetakAntrian(){
    cout << "=================" << endl;

    if(isEmpty()){ 
        cout << "Perut Kosong." << endl;
    }else{
        currentnode = head;
        cout << "" << endl;
        while(currentnode != NULL){
            cout << currentnode->nomorAntrian << ".  " << currentnode->nama << endl;
            currentnode = currentnode->next; 
        }
        cout << "=================" << endl;
    }
}

void clear(){
    currentnode = head;
    while(currentnode != NULL){
        temporaryNode = currentnode;
        temporaryNode->next = NULL;
        currentnode = currentnode->next;
    }
    head = NULL;
    temporaryNode == NULL;
    cout << "" << endl;
}

