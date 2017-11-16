#include<iostream>

using namespace std;

int main(){
    int arr[5]; // kita mendeklarasikan array dengan nama arr dan jumlah data yang dapat ditampung adalah 5;

    for(int i = 0; i < 5; i++){
        cout << "Masukan isi array pertama : ";
        cin >> arr[i];
    }
    cout << endl;
    cout << "Isi dari array tersebut adalah : ";
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}