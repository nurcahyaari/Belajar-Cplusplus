#include<iostream>
#include"linklist.h"
using namespace std;



int main(){
    int nilai, posisi;
    int d = 0;
    nilai = 1;
    LinkList l;
    while(nilai > 0){
        system("clear");
        l.showNode();
        cout << "1. Masukan Belakang" << endl;
        cout << "2. Masukan Tengah" << endl;
        cout << "3. Masukan Depan" << endl;
        cout << "4. Hapus Depan" << endl;
        cout << "5. Hapus Belakang" << endl;
        cout << "Pilih : " ;
        cin >> d;
        if(d < 4){
            cout << "Masukan Angka : ";
            cin >> nilai;
        }
        if(d == 1){
            l.AddRear(nilai);
        }
        else if(d == 2){
            cout << "Masukan Posisi : ";
            cin >> posisi;
            l.AddSpecificPosition(nilai, posisi);
        }
        else if(d == 3){
            l.AddFront(nilai);
        } else if(d == 4){
            l.DelFront();
        } else if(d == 5){
            l.DelRear();
        }
        d++;
    }
}