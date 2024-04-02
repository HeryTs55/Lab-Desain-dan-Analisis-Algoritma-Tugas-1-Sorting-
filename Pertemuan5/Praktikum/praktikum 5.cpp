#include<iostream>

using namespace std;

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    cout << "\nArray setelah diurutkan:\n ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    
}


int main()
{
    int arr[] = {12, 11, 13, 6, 5};
    int N = sizeof(arr) / sizeof(arr[0]);
    
    int i;
    cout << "Array sebelum diurutkan:\n ";
    for (i = 0; i < 5; i++)
    cout << arr[i] << " ";

    insertionSort(arr, N);
    

    return 0;
}

