#include <iostream>

using namespace std;

void TampilArray(char nilai[10], int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<nilai[i]<<' ';
    }cout<<endl;
}

int main()
{
    char nilai[10];
    int i,n,j,tmp;

    cout<<" \n ================================== "<<endl;
    cout<<" \n Masukkan Banyaknya Elemen Array = "; cin>>n;
    cout<<endl;
    for(int i=0; i<n;i++)
    {
        cout<<" \n Elemen Array Ke-"<<i<<" : ";cin>>nilai[i];
    }
    
    cout<<"\n Data Sebelum Sorting : ";
    TampilArray(nilai,n);
    for(int i=1; i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
        if (nilai[j] < nilai[j+1])
            {
                tmp=nilai[j];
                nilai[j]= nilai[j+1];
                nilai[j+1] = tmp;
            }
        }
    }
     cout<<" \n\n Data Setelah Sorting : ";
     TampilArray(nilai,n);

    return 0;

}

