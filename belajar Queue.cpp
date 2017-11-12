#include<iostream>
#include<stdlib.h>
using namespace std;

bool isFull(int * data){
    int j = 0;
    for(int i = 0; i < 3; i++){
        if(data[i] != 0){
            j++;
        }
    }
    if(j >= 3){
        return true;
    }
    else{
        return false;
    }
}

bool isEmpty(int *data){
    int j = 0;
    for(int i = 0; i < 3; i++){
        if(data[i] == 0){
            j++;
        }
    }
    if(j > 2){
        return true;
    }
    else{
        return false;
    }
}

void tambah(int *data){
    int nilai;
    cout << "Masukan data : ";
    cin >> nilai;
    if(isFull(data)){
        cout << "Antrian sudah penuh" << endl;
    }else{
        cout << "Masuk ke antrian" << endl;
        for(int i = 0; i < 3; i++){
            if(data[i] == 0){
                data[i] = nilai;
                break;
            }
        }
    }
}

void hapus(int * data, int &cls){
    cout << "Nilai CLSnya : " << cls << endl;
    data[cls] = 0;
    cls++;
    if(cls > 2){
        cls = 0;
    }
    cout << "Nilai cls sesudah : " << cls << endl;
    if(isEmpty(data)){
        cls = 0;
    }
}

void menu(int * data){
    cout << "1. Tambah data " << endl;
    cout << "2. Hapus Data " << endl;
    cout << "masukan pilihan : "; 
    
}

int main(){
    int * data = (int*) malloc(4 * sizeof(int));
    int del = 0;
    for(int i = 0; i < 3; i++){
        data[i] = 0;
    }
    int pil;
    bool ulangi = true;
    while(ulangi){
        for(int i = 0; i < 3; i++){
            cout << data[i] << " " ;
        }
        cout << endl;
        menu(data);
        cin >> pil;
        switch(pil){
            case 1 : {
                tambah(data);
                break;
            }
            case 2 : {
                hapus(data, del);
                break;
            }
            default : {
                ulangi = false;
            }
        }
    }
}