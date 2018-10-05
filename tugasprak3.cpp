#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std ;

int main()
{
	
	//Deklarasi Variable
	int TB,SS,BBI ;
	cout<<"MasukkanTB : "; cin>>TB;
	
	//Menghitung Konversi
	SS = (TB - 100)*0.1 ;
	BBI = TB - 100 - SS ;
	cout<<endl;
	
	//Menampilkan Hasil
	cout<<"BBI : " <<BBI<<endl ;
	getch () ;
	return 0 ;
	
}
