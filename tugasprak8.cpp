#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	
	//Deklarasi Variable
	int TotalBeli,JlhBayar,Potongan;
	
	JlhBayar = 0; cout<<"Total Pembelian Rp."; cin>>TotalBeli;
	if (TotalBeli >=50000)
	Potongan = 0.2 * TotalBeli;
	else
	Potongan = 0.05 * TotalBeli; cout<<"Besarnya Potongan Rp."
	<<Potongan<<endl; JlhBayar = TotalBeli - Potongan;
	
	cout<<"Jumlah yang harus dibayarkan Rp."<<JlhBayar<<endl;
	getch ();
	return 0 ;
}
