#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int array[100], n;

    cout << "Masukkan banyak elemen: ";
    cin >> n;

    cout << "Masukkan nilai:\n";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    bubbleSort(array, n);

    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}

