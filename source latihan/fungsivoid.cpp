#include<iostream>
using namespace std;

float luasLingkaran(int r){ // pembuatan fungsi bertipe float, dengan nama luasLingkaran berparameter 1
    return 1/(float)2 * 3.14 * r * r; // kembaliannya adalah nilai tersebut
}

void cetakHello(){
    int jari;
    float hasil;
    cout << "Masukan Jari Jari : " ; 
    cin >> jari;
    hasil = luasLingkaran(jari); // pemanggilan fungsi luasLingkaran pada fungsi main
    cout << "Luas Lingkaran dengan jari jari : " << jari << " adalah " << hasil << endl;
}

int main(){
    cetakHello();
}