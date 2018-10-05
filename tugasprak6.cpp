#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main ()
{
	
	//Deklarasi Variable
	int angka ;
	
	//Input Angka
	cout<<"Masukkan Angka : "; cin>>angka;
	cout<<endl;
	//Seleksi Pembandingan AND, Kedua kondisi harus bernilai benar 
	if ((angka>0) && (angka < 10 ))
	cout<<"Anda memasukkan angka antara 1 sampai 9";
	else cout<<"Yang Anda masukkan bukan antara 1 sampai 9";
	return 0 ;
}
