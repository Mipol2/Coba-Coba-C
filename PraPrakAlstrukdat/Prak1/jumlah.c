#include <stdio.h>

/*NIM: 18221124*/
/*Nama:Jazmy Izzati Alamsyah*/
/*Tanggal: 3 Agustus 2022*/
/*Topik praktikum: Pengenalan C*/
/*Deskripsi: program dalam Bahasa C yang mengimplementasikan fungsi penjumlahan 2 bilangan bulat*/

/*Algoritma*/

long int jumlah( long int a, long int b){
	return a + b;
}
int main()
{
	long int a;
	long int b;
	scanf("%ld %ld", &a, &b);

	printf("%ld\n", jumlah(a,b));

	return 0;
}