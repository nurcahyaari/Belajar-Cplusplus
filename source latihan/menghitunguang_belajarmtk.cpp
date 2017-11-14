#include<iostream>
using namespace std;

int main(){
    int uang_kita;
    int jajan;
    uang_kita = 50000;
    cout << "Masukan harga jajanan : ";
    cin >> jajan;
    uang_kita = uang_kita - jajan;
    cout << "Uang sekarang : " << uang_kita << endl;
}