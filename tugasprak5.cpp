#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	int nilai ;
	cout<<"Masukkan Nilai : "; cin>>nilai;
	cout<<endl;
	if (nilai>50)
	{
		cout<<"Selamat, Anda Lulus...";
	}
	else
	{
		cout<<"Maaf, Anda Belum Lulus Belajar Lagi ...";
	}
}
