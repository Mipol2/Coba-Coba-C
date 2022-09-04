/*
	NIM/ Nama : 18221124/Jazmy Izzati Alamsyah
	Topik: Pengulangan
	Tanggal: 4 September 2022
	Deskripsi: { Menghitung deret S = 1 - 1/2 + 1/3 - 1/4 + ... + 1/999 - 1/1000 }
 */

#include <stdio.h>

int main(){
    float S = 0;
    int tanda = 1;
    int i =1;

    while(i<1001){
        S += tanda * 1 / (float)i;
        tanda = tanda*-1;
        i++;
    }
    
    printf("S = %f\n", S);
    return 0;
}


