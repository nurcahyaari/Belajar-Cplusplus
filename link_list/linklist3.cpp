#include<iostream>
#include"linklist.h"
using namespace std;



int main(){
    int nilai, posisi;
    int d = 0;
    nilai = 1;
    LinkList l;
    while(nilai > 0){
        cout << "1. Masukan Belakang : " << endl;
        cout << "2. Masukan Tengah : " << endl;
        cout << "3. Masukan Depan " << endl;
        cout << "Pilih : " ;
        cin >> d;
        
        cout << "Masukan Angka : ";
        cin >> nilai;
        if(d == 1){
            l.AddR(nilai);
        }
        else if(d == 2){
            cout << "Masukan Posisi : ";
            cin >> posisi;
            l.AddSP(nilai, posisi);
        }
        else{
            l.AddF(nilai);
        }
        l.showNode();
        d++;
    }
}