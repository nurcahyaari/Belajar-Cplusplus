#include<iostream>

using namespace std;

int main(){
    // pre increment
    int a = 2;
    cout << "Nilai A : " << a << endl;
    a--;
    cout << "Nilai A sesudah dinaikkan : " << a << endl; // hasilnya akan 1

    // post increment
    int b = 2;
    cout << "Nilai B : " << b << endl;
    --b;
    cout << "Nilai B sesudah dinaikkan : " << b << endl; // hasilnya akan 1

    // lalu apa bedanya?
    int c = 2;
    int d, e;

    // pre increment
    d = --c;
    cout << "Nilai D adalah : " << d << endl; //nilai D hasilnya akan 1

    // post increment
    e = d--;
    cout << "Nilai E adalah : " << e << endl; // nilai E hasilnya adalah 1

}