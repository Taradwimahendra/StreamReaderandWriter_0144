#include<fstream>
#include<iostream>
#include<string>
using namespace std;

int main(){
string baris;
string NamaFile;
cout << "Masukkan Nama File : ";
cin >> NamaFile;

ofstream outfile;

outfile.open(NamaFile + ".txt", ios::out);
      cout << ">= Menulis file, \'q\' untuk keluar" << endl;

      while (true){
        cout << "- ";
        getline(cin, baris);

         if (baris == "q") break;
       outfile << baris << endl;
      }

    outfile.close();

     ifstream infile;

    infile.open(NamaFile, ios::out);
     cout << ">= Membuka dan membaca file " << endl;

     if (infile.is_open())
     {
        while (getline(infile, baris))
        {
             cout << baris << '\n';
        }
     }
}