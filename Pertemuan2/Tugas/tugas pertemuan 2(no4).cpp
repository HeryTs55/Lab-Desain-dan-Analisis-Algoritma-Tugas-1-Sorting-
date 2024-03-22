#include<iostream>
using namespace std;

void swap(int arr[], int pos1, int pos2){
    int temp;
    temp = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = temp;
}

int partition(int arr[], int low, int high, int pivot){
    int i = low - 1; 
    for (int j = low; j <= high - 1; j++){
        
        if (arr[j] > pivot){
            i++; 
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, high);
    return (i + 1);
}

void quicksort(int arr[], int low, int high){
    if (low < high){
        
        int pivot = arr[high];
        int pi = partition(arr, low, high, pivot);
        
        
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int main(){
    int n;
    cout << "Tentukan Panjang Array : ";
    cin >> n;
    int arr[n];
    cout << "Masukkan Elemen Array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    quicksort(arr, 0, n - 1);
    cout << "Array setelah diurutkan secara descending: ";
    for (int i = 0; i < n; i++){ 
        cout << arr[i] << " ";
    }
}

