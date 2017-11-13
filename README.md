# Apa itu C++
C++ adalah sebuah bahasa pemrograman yang dikembangkan dari bahasa C oleh Bjarne Stroustrup pada tahun 1980 an di Bell Labs. Salah satu kelebihan bahasa C++ dibandingkan bahasa C adalah dukungan terhadap konsep PBO (Pemrograman Berorientasi Objek)



# Table Konten : 
* [Sintak Dasar](#sintak-dasar)
* [Komentarin Sourcenya yuk biar tidak bingung](#komentar)
    * [Komentar sebaris](#komentar-sebaris)
    * [komentar lebih dari 1 baris](#komentar-lebih-dari-sebaris)
* [Kenalan dengan Tipe data dan Variabel yuk](#kenalan-dengan-tipe-data-dan-variabel-yuk)
    * [Variabel](#variabel)


## Sintak Dasar
Untuk menulis kode program dengan C++ ada sintak dasarnya, dimana sintak tersebut sangatlah penting agar program dapat berjalan, karena jika tidak ada maka program tidak dapat berjalan sama sekali, atau bahkan error. Sintak dasarnya seperti ini :

    #include<iostream>
    using namespace std;

    int main(){

    }

Penjelasan kode :

    #include<iostream> 
    
 C++ melampirkan beberapa header dengan cara #include<file_header_yang_ingin_ditampilkan>,
oh iya #include itu termasuk preprocessor dan #include ini berguna untuk memanggil atau menambahkan file header.
setiap File header memiliki fungsi dan kegunaan tertentu salah satunya adalah iostream. 
iostream adalah library standar untuk melakukan operasi input maupun output dalam program 
yang kita tulis, salah satu sintak untuk melakukan input dan output adalah cin 
dan cout dimana cin adalah sintak untuk melakukan input dari keyboard dan
cout adalah sintak untuk mencetak kode program agar dapat tampil dilayar.
berikut ini adalah contoh sederhana dari input dan output program paling sederhana : 

<img src="https://github.com/NurcahyaAri/Belajar-Cplusplus/blob/master/images/basic%20input%20output%20.gif" alt="alt text" width="510px" height="267px" alt="input output sederhana" title="input output sederhana">

    using namespace std;

 untuk menggunakan standar library dari C++ maka kita harus menuliskan kode tersebut, karena jika tidak 
 dituliskan maka program yang kita buat akan error.

    int main(){

    }
 
terakhir adalah int main(), int main() sendiri adalah fungsi utama dalam program c++. setiap kode program yang ditulis akan dipanggil disini, jadi ketika program kalian jalankan maka semua baris yang ada di fungsi main inilah yang nantinya akan diproses, tetapi jika kalian menulis kode diluar main() dan tidak dipanggil didalam fungsi ini maka kode tersebut tidak akan diproses sama sekali


## Komentar
Ketika kita sudah menulis sebuah kode program terkadang kita juga bingung apa yang sudah kita tulis, atau kita malah lupa bagaimana proses program tersebut berjalan, dan juga kita sering kali lupa dan bertanya tanya "mengapa kita buat programnya seperti ini ya? gunanya sebenernya apa ini?" nah dengan adanya komentar ini kita dapat mengomentari kegunaan dari baris program yang sudah kita buat agar kita tidak bingung, selain itu komentar juga biasa digunakan untuk menulis lisensi program atau pengarang program tersebut. berikut ini adalah contoh komentar
<img src="https://github.com/NurcahyaAri/Belajar-Cplusplus/blob/master/images/komentar.png" alt="alt text" alt="input output sederhana" title="input output sederhana">

disitu terlihat jelas bahwa komentar tidak akan ikut tampil ketika program dijalankan. oh iya komentar ada dua jenis, yaitu : 

### komentar sebaris
ketika kita hanya ingin mengomentari hanya satu baris program maka kita dapat menggunakan komentar jenis ini cara penggunaannya seperti ini
    // text yang ingin dijadikan komentar

### komentar lebih dari sebaris
sedangkan ketika kita ingin mengomentari 2 baris atau 3 atau mungkin 10 baris kita juga bisa, untuk mengomentari lebih dari 10 baris caranya seperti ini

    /* Nama saya Ari Nurcahya,
       Saya bingung mau nulis apa lagi
       Saya suka kucing, dan juga suka Dia*/

untuk komentar lebih dari 1 baris kita mulai dengna '/*' kemudian ditutup dengan '*/'

## Kenalan dengan Tipe data dan Variabel yuk
melakukan pemrograman bagaikan melakukan operasi matematika, dimana kita perlu memerlukan variabel.
2x + 3 = 10 adalah salah satu contoh dimana kita memerlukan variabel yang bernama x, dan x sendiri bernilai 4. 2x + 3 = 10; 2 adalah koefisien, x adalah variabel + adalah operator penjumlahan dan 3 adalah konstantan. dalam pemrograman kita bisa menulisnya 2 * x + 3; karena pada hakikatnya bahasa pemrograman tidak mengenal yang namanya koefisien

### Tipe Data
Tipe data apasih? dalam melakukan programming kita mungkin harus menulis sebuah Variabel, Konstanta, ataupun Fungsi. nah ketiga hal tersebut adalah contoh dimana kita membutuhkah tipe data. maksudnya adalah karena Variabel, Konstanta dan fungsi adalah sebuah data, jadi kita harus tau tipenya adalah apa.
Tipe data sendiri juga merepresentasikan bilangan yang akan kita gunakan. mungkin kita harus menggunakan bilangan bulat, atau mungkin pecahan. nah tapi perlu diketahui juga kita tidak mungkin bisa menggunakan data berupa pecahan pada tipe data bilangan bulat. beberapa tipe data yang mungkin memang harus dihafal dan diketahui adalah int (untuk bilangan bulat), float (bilangan pecahan), dan bool (untuk data berupa pernyataan benar dan salah)

<img src="https://github.com/NurcahyaAri/Belajar-Cplusplus/blob/master/images/komentar.png" alt="alt text" alt="input output sederhana" title="Tabel tipe data">


### Variabel
Variabel adalah suatu hal yang bisa berubah ubah dan belum pasti, jika dalam programming variabel bisa juga diartikan sebagai sebuah penampung data yang nilainya dapat berubah ubah sesuai kebutuhakn kita. 
contoh nyata variabel adalah : 
- 2x + 2; dimana x adalah variabel, dan dia mempengaruhi hasilnya
- x = 2 + 2; x tersebut juga adalah variabel, dan x tersebut dicari nilainya

untuk mendeklarasikan variabel diperlukan beberapa syarat dimana
- nama variabel tidak boleh diawali angka
- nama variabel tidak boleh menggunakan spasi
- nama variabel tidak boleh sama dengan kata yang sudah ada dalam bahasa C++

cara pendeklarasian variabel adalah : 

tipe_data nama_variabel;

contoh : 

    int a;
    int variabel;
    float bilGanjil;
    float bilGanjil1;
    bool apakah_benar;
    char nama;




    


