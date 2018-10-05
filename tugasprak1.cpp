#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;
int main()
{
	//Deklarasi variabel
	int yard, kaki, inchi, meter ;
	cout<<"Masukkan satuan meter : "; cin>>meter;
	
	//Menghitung Konversi
	kaki = meter / 0.3048 ;
	yard = meter / 0.9144 ;
	inchi = meter / 0.0254 ;
	cout<<endl ;
	
	//Menampilkan Hasil
	cout<<yard<<" Yard " <<kaki<<" Kaki " <<inchi<<" Inchi ";
	return 0;
}

