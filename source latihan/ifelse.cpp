#include<iostream>
using namespace std;

int main(){
    int angka; // pendeklarasian variabel angka
    cout << "Masukan angka 1 - 100 ";
    cin >> angka; // melakukan inputan

    if(angka % 2 == 0){
        cout << angka << " adalah bilangan genap" << endl; // blok ketika kondisi benar
    }
    else{
        cout << angka << " adalah bilangan ganjil" << endl; // block ketika kondisi salah
    }
}