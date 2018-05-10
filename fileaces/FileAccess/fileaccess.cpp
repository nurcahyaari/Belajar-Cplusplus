#include<iostream>
#include<fstream>
#include<vector>
#include<string.h>

using namespace std;

struct Mhs{
    char nim[10];
    string nama;
    int umur;
};


class Mahasiswa{
    Mhs Data;
    vector <Mhs> dtMhsV;
    Mhs dtMhs;
    ofstream oData;
    ifstream iData;
    string line;
    int jumlahMhs;
    public:
        Mahasiswa(){ // bakal langsung berjalan pas classnya udah dibuat jadi objek
            jumlahMhs = 0;
            oData.open("DataMhs.txt", ios::app);
            oData.close();

            iData.open("DataMhs.txt");
            if(iData.is_open()){
                while(getline(iData, line)){
                    iData >> dtMhs.nim;
                    iData >> dtMhs.nama;
                    iData >> dtMhs.umur;
                    dtMhsV.push_back(dtMhs);
                    jumlahMhs++;
                }
                dtMhsV.pop_back();
                jumlahMhs--;
                iData.close();
            }
        }

        void updateData(){
            oData.open("DataMhs.txt");
            oData << "DataMhs" << endl;
            for(int i = 0; i < jumlahMhs; i++){
                oData << dtMhsV[i].nim << endl;
                oData << dtMhsV[i].nama << endl;
                oData << dtMhsV[i].umur << endl;
            }
            oData.close();
        }

        void updateDataLihat(){
            iData.open("DataMhs.txt");
            jumlahMhs = 0;
            if(iData.is_open()){
                while(getline(iData, line)){
                    iData >> dtMhs.nim;
                    iData >> dtMhs.nama;
                    iData >> dtMhs.umur;
                    dtMhsV.push_back(dtMhs);
                    jumlahMhs++;
                }
                dtMhsV.pop_back();
                jumlahMhs--;
            }
            iData.close();
        }

        void tambahData(){
            cout << "Masukan Nama : ";
            cin >> dtMhs.nama;
            cout << "Masukan Nim : ";
            cin >> dtMhs.nim;
            cout << "Masukan Umur : ";
            cin >> dtMhs.umur;
            dtMhsV.push_back(dtMhs);
            jumlahMhs++;
            updateData();
            updateDataLihat();
        }

        void updateDataMethod(){
            lihatData();
            char nim[10];
            cout << "Masukan Nim yang ingin di Update";
            cin >> nim;
            for(int i = 0; i < jumlahMhs; i++){
                if(strcmp(dtMhsV[i].nim, nim) == 0){
                    cout << "Masukan Nama : ";
                    cin >> dtMhsV[i].nama;
                    cout << "Masukan Nim : ";
                    cin >> dtMhsV[i].nim;
                    cout << "Masukan Umur : ";
                    cin >> dtMhsV[i].umur;
                    updateData();
                    break;
                }
            }
        }

        void lihatData(){
            cout << "Nim \t\t Nama '\t\t Umur" << endl;
            for(int i = 0; i < jumlahMhs; i++){
                cout << dtMhsV[i].nim << "\t" 
                     << dtMhsV[i].nama << "\t"
                     << dtMhsV[i].umur << endl;
            }
        }

};


int main(){
    Mahasiswa mhs;
    bool ulang = true;
    int pilih;
    char wait[100];
    while(ulang){
        system("clear");
        cout << "1. Masukan Data : " << endl;
        cout << "2. Lihat Data : " << endl;
        cout << "3. Update Data : " << endl;
        cin >> pilih;
        switch(pilih){
            case 1 : {
                cout << "Masukan Data" << endl;
                mhs.tambahData();
                cout << "Press Any Key to return";
                cin >> wait;
                break;
            }
            case 2 : {
                cout << "Lihat Data" << endl;
                mhs.lihatData();
                cout << "Press Any Key to return";
                cin >> wait;
                break;
            }
            case 3 : {
                cout << "Update Data" << endl;
                mhs.updateDataMethod();
                cout << "Press Any Key to return";
                cin >> wait;
                break;
            }
            default : {
                ulang = false;
                break;
            }
        }
    }
}