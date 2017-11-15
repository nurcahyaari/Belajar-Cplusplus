#include<iostream>

using namespace std;

int main(){
    int angka;
    cout << "masukan angka : ";
    cin >> angka;
    if(angka > 10 && angka < 20){
        cout << "Angka lebih besar dari 10 tetapi lebih kecil dari 20" << endl;
    }
    else if(angka > 20 && angka < 40){
        cout << "Angka lebih besar dari 20 tetapi lebih kecil dari 40" << endl;
    }
    else{
        cout << "Angka yang anda masukan tidak ada dalam jangkauan" << endl;
    }
}