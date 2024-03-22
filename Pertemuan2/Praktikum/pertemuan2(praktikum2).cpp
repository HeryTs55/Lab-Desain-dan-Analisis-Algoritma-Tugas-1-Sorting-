#include<iostream>
using namespace std;

void merge(int arr[], int left, int m,  int right) {
    int x, y, z;
    int n1 = m - left + 1;
    int n2 = right - m;

    
    int L[n1], R[n2];
    for (x = 0; x < n1; x++)
        L[x] = arr[left + x];
    for (y = 0;  y < n2; y++)
        R[y] = arr[m + 1 + y];

    
    x = 0;
    y = 0;
    z = left;
    while (x < n1 && y < n2) {
        if (L[x] <= R[y]) {
            arr[z] = L[x];
            x++;
        }
        else {
            arr[z] = R[y];
            y++;
        }
        z++;
    }
    while (x < n1) {
        arr[z] = L[x];
        x++;
        z++;
    }

    while (y < n2) {
        arr[z] = R[y];
        y++;
        z++;
    }
}

void mergesort(int arr[], int left, int right) {
    if (left < right) {
        int m = left + (right - left) / 2;

        mergesort(arr, left, m);
        mergesort(arr, m + 1, right);

        merge(arr, left, m, right);
    }
}

void show(int A[], int size) {
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
    cout << endl;
}

int main() {
    int size;
    cout << "Masukkan Banyak Data: ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++) {
        cout << "Masukkan data array ke " << i << " : ";
        cin >> arr[i];
    }

    mergesort(arr, 0, size - 1);

    cout << "Hasil setelah pengurutan:\n";
    show(arr, size);
    return 0;
}

