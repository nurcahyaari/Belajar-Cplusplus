#include<iostream>

using namespace std;

int main(){
    string input; //pendeklarasian variabel bernama input bertipe data string
    cout << "Masukan nama panggilan : "; // melakukan output ke layar monitor berupa text "Masukan nama panggilan : "
    cin >> input; // meminta inputan dari user. kemudian inputan tersebut akan disimpan kedalam variabel input
    cout << "Nama anda adalah : " << input << endl; // melakukan output program ke layar monitor berupa text "Nama anda adalah : " ditambah variable yang diinputkan tadi
}