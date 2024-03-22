#include<iostream> // Mengimpor pustaka iostream untuk input-output standar
using namespace std;

// Fungsi swap untuk menukar dua elemen dalam array
void swap(int arr[], int pos1, int pos2){
    int temp;
    temp = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = temp;
}

// Fungsi partition untuk membagi array menjadi dua bagian berdasarkan pivot
int partition(int arr[], int low, int high, int pivot){
    int i = low - 1; // Index terakhir dari elemen yang lebih kecil dari pivot
    for (int j = low; j <= high - 1; j++){
        
        if (arr[j] < pivot){ // Jika elemen saat ini lebih kecil dari pivot
            i++; // Meningkatkan index terakhir dari elemen yang lebih kecil
            swap(arr, i, j); // Menukar elemen saat ini dengan elemen yang lebih kecil
        }
    }
    swap(arr, i + 1, high); // Menukar pivot dengan elemen yang lebih kecil berikutnya
    return (i + 1); // Mengembalikan index pivot yang baru
}

// Fungsi quicksort untuk mengurutkan array dengan menggunakan metode quicksort
void quicksort(int arr[], int low, int high){
    if (low < high){ // Jika masih ada lebih dari satu elemen dalam array
        
        int pivot = arr[high]; // Memilih pivot dari elemen terakhir
        int pi = partition(arr, low, high, pivot); // Membagi array dan mendapatkan index pivot
        
        // Panggil quicksort secara rekursif untuk bagian kiri dan kanan dari pivot
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

// Fungsi main sebagai titik masuk program
int main(){
    int n;
    cout << "Tentukan Panjang Array : ";
    cin >> n; // Meminta input panjang array dari pengguna
    int arr[n]; // Deklarasi array dengan panjang n
    cout << "Masukkan Elemen Array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i]; // Meminta input elemen array dari pengguna
    }
    quicksort(arr, 0, n - 1); // Memanggil fungsi quicksort untuk mengurutkan array
    cout << "Berikut Adalah Array Yang telah disortir: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << "\t"; // Menampilkan array yang telah diurutkan
    }
    return 0; // Mengembalikan 0 untuk menunjukkan bahwa program berakhir dengan sukses
}




#include<iostream>
using namespace std;

// Fungsi merge untuk menggabungkan dua bagian yang sudah diurutkan menjadi satu
void merge(int arr[], int left, int m,  int right) {
    int x, y, z;
    int n1 = m - left + 1;
    int n2 = right - m;

    // Membuat array sementara untuk menyimpan bagian kiri dan kanan
    int L[n1], R[n2];
    for (x = 0; x < n1; x++)
        L[x] = arr[left + x];
    for (y = 0;  y < n2; y++)
        R[y] = arr[m + 1 + y];

    // Menggabungkan kembali kedua bagian secara berurutan
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
    // Menyalin sisa elemen dari bagian kiri dan kanan jika masih ada
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

// Fungsi mergesort untuk mengurutkan array menggunakan metode merge sort
void mergesort(int arr[], int left, int right) {
    if (left < right) {
        int m = left + (right - left) / 2;

        mergesort(arr, left, m);
        mergesort(arr, m + 1, right);

        merge(arr, left, m, right);
    }
}

// Fungsi show untuk menampilkan elemen-elemen array
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

    // Meminta input elemen array dari pengguna
    for (int i = 0; i < size; i++) {
        cout << "Masukkan data array ke " << i << " :";
        cin >> arr[i];
    }

    // Memanggil fungsi mergesort untuk mengurutkan array
    mergesort(arr, 0, size - 1);

    // Menampilkan hasil pengurutan array
    cout << "Hasil setelah pengurutan:\n";
    show(arr, size);
    return 0;
}

