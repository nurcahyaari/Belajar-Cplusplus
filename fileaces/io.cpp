#include<iostream>
#include<fstream>
using namespace std;

struct Biodata{
    string nama;
    int umur;
}Honka[100];

int main(){
    string nama;
    int umur;
    int jumlah;
    jumlah = 0;
    ofstream output;
    ifstream input;
    output.open("fileio.cpp", ios::app);
    input.open("fileio.cpp");
    if(output.is_open()){
        cout << "File berhasil dibuka" << endl;
        cout << "Masukan Nama ; " ; cin >> nama;
        cout << "Masukan umur : " ; cin >> umur;
        output << nama << endl;
        output << umur << endl;
    }
    else{
        cout << "File gagal dibuka" << endl;
    }
    
    if(input.is_open()){
        while(!input.eof()){
            input >> Honka[jumlah].nama;
            input >> Honka[jumlah].umur;
            jumlah++;
        }
        jumlah--;
    }
    for(int i = 0; i < jumlah; i++){
        cout << "Nama : " << Honka[i].nama << endl;
        cout << "Umur : " << Honka[i].umur << endl << endl;
    }
    
}