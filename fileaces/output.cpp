#include<iostream>
#include<fstream> // ketika kita ingin menggunakan akes file maka kita harus mendeklarasikan library fstream

using namespace std;

int main(){
    ofstream output ;
    output.open("file.txt");
    if(output.is_open()){
        cout << "File berhasil dibuka" << endl;
        output << "Hello World" << endl;
        output.close();
        cout << "File sudah ditutup kembali, silahkan cari file bernama text.txt di directori anda" << endl;
    }
    else{
        cout << "Gagal membuka file" << endl;
    }
}