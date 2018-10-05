#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	
	//Deklarasi Variable
	char huruf ;
	
	//Input Huruf
	cout<<"Masukkan huruf kecil : ";
	cin>>huruf; cout<<endl;
	//Seleksi Pembanding OR, Salah Satu kondisi bernilai benar
	if ((huruf == 'a' || huruf == 'i' || huruf == 'u' || huruf == 'e' || huruf == 'o' ))
	cout<<"Anda memasukkan huruf vokal" ;
	else cout<<"Yang Anda masukkan adalah huruf konsonan";
	return 0;
	
}
	
