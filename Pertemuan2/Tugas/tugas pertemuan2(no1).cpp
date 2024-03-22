#include <iostream>
#include <algorithm>
using namespace std;

int part(int ar[], int low, int high) {
    int pivot = ar[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (ar[j] > pivot) {
            i++;
            swap(ar[i], ar[j]);
        }
    }
    swap(ar[i + 1], ar[high]);
    return i + 1;
}

void qs(int rr[], int low, int high) {
    if (low < high) {
        int pi = part(rr, low, high);

        cout << "[ ";
        for (int i = 0; i < 10; i++) {
            cout << rr[i] << " ";
        }
        cout << " ]";
        cout << endl;

        qs(rr, low, pi - 1);
        qs(rr, pi + 1, high);
    }
}

int main() {
    int ar[100];
    
    cout << "masukkan 10 data: [ ";
    for (int i = 0; i < 10; i++) {
        cin >> ar[i];
    }
    cout << "]" << endl;
    
    system("cls");
    
    cout << "Data yang akan di sort : [ ";
    for (int i = 0; i < 10; i++) {
        cout << ar[i] << " ";
    }
    cout << "]" << endl << endl;

    cout << "Quick Sort: " << endl;
    qs(ar, 0, 10 - 1);

    return 0;
}

