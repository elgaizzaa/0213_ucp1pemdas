//1. a. int= tipe data yang digunakan untuk bilangan bulat ct=int angka1=5;
 // b. Float= tipe data yang digunakan untuk bilangan desimal atau bilangan berkoma  ct= berat_bayam =0,5;
//  c.String = tipe data yang digunakan untuk panjang nama ct =elga_izza

//2. ct nilai rerata >=75 itu lulus jika tidak (kurang dari rerata) maka dinyatakan tidak lulus 

//3.implemen dr struck : struct sayur {
    //string nama_sayur;
    //float berat;
    //int harga;   
    // int main()
    // sayur bayam;
    // bayam.berat="0,5 kg";
    //bayam.harga="1500";   
    // cout << bayam.berat <<endl;
    // cout <<bayam.harga <<endl;
   
 //4.( ct fungsi) string nama;
//    int nbolpen, nkursi, nBuku;   
//    int hbolpen = 5, hkursi = 13, hBuku = 1;
//    
//	(ct prosedur)  void input(){
//		cout << "Nama Pembeli : ";
//		cin >> nama;    
// 5 perulangan(looping) saya taruh di bawah 




#include <iostream>
using namespace std;

string nama[20]; 
float matematika[20], bhs_inggris[20]; 
bool diterima[20]; 

bool Diterima(float matematika, float bhs_inggris) {
    float rerata = (matematika + bhs_inggris) / 2;
    return (rerata >= 70 || matematika > 80);  
    
}

void input() {
    for (int i = 0; i < 20; i++) {
        cout << "Masukkan Nama Mahasiswa ke- " << i + 1 << ":";
        cin >> nama[i];
        cout << "Masukkan Nilai Matematika Mahasiswa ke- " << i + 1 << ":";
        cin >> matematika[i];
        cout << "Masukkan Nilai Bahasa Inggris Mahasiswa ke- " << i + 1 << ":";
        cin >> bhs_inggris[i];

        diterima[i] = Diterima(matematika[i], bhs_inggris[i]);
    }
}
void display() {
    cout << "\n\nNama\tStatus" << endl;
    for (int i = 0; i < 3; i++) {
        cout << nama[i] << "\t";
        if (diterima[i]) {
            cout << "Diterima" << endl;
        } else {
            cout << "Ditolak" << endl;
        }
    }
}

int main() {
    string pilihan;
    
    do 
    {
        input();
        display();

        cout << "Apakah anda ingin mengulang program (Yes/No)" << endl;
        cin >> pilihan;
    } while(pilihan == "Yes");
    return 0;
}
