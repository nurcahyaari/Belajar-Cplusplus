#include<iostream>
using namespace std;

int main(){
    int pilihan;
    cout << "1. Saya suka dia tapi bahkan saya tidak berani mendekatinya" << endl;
    cout << "2. Dia suka saya ga ya? atau bahkan benci saya >.<" << endl;
    cout << "3. Saya harus berusaha agar bisa mendapatkan hatinya" << endl;
    cout << "Masukan pilihan : ";
    cin >> pilihan;
    switch(pilihan){
        case 1 : { // ketika kita menginputkan angka 1 maka outputnya ini
            cout << "Saya suka dia tapi bahkan saya tidak berani mendekatinya" << endl;
            break;
        }
        case 2 : {// ketika kita menginputkan angka 2 maka outputnya ini
            cout << "Dia suka saya ga ya? atau bahkan benci saya >.<" << endl;
            break;
        }
        case 3 : { // ketika kita menginputkan angka 3 maka outputnya ini
            cout << "Saya harus berusaha agar bisa mendapatkan hatinya" << endl;
            break;
        }
        default : { // ketika angka yang kita inputkan tidak ada maka outputnya adalah ini
            cout << "Kalau gitu terus kapan bisa dapetin hatinya??"<<endl;
            break;
        }
    }
}