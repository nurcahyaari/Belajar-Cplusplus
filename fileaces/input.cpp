#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string kata[100];
    int jumlah = 0 ;
    ifstream input;
    input.open("file.txt");
    if(input.is_open()){
        while(!input.eof()){
            input >> kata[jumlah];
            jumlah++;
        }
        for(int i = 0; i < jumlah; i++){
            cout << kata[i] << " ";
        }
        cout << endl;
    }
}