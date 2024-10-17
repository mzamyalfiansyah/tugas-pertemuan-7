#include<iostream>
using namespace std;

int main(){

    cout << "Nama : Muhammad Zamy Alfiansyah" << endl;
    cout << "Kelas : 1B" << endl;
    cout << endl;

    int angka[5];


    cout << "Masukkan 5 Nilai" << endl;

    for(int i = 1; i < 6; ++i){

        cout << "Masukkan nilai ke " << i << ": ";
        cin >> angka[i];

    }

    int terbesar = angka[5];
    for(int i = 1; i < 6; i++){
        if(angka[i] > terbesar){
            terbesar = angka[i];
        }
    }

    cout << endl;
    cout << "Nilai Tertinggi Adalah  " << terbesar << endl;

    cout << endl;

    int cari;
    cout << "Masukkan angka untuk dicari : ";
    cin >> cari;

    cout << endl;

    bool found = false;
    for(int i = 1; i < 6; i++){

        if(angka[i] == cari){

            cout << "Nilai " << cari << " ditemukan, di urutan ke " << i << endl;
            found = true;

            }
        }

        if(!found){

            cout << "Nilai " << cari << " tidak ditemukan!" << endl;

    }
    return 0;
}












