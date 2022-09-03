/*  Nama: Jazmy Izzati ALamsyah
    NIM: 18221124
    Tanggal:
    Topik Praktikum: Pengenalan C
    Deskripsi: Membuat program dapat mencari nilai maximum dari 3 angka
*/
#include <stdio.h>

int main (){
    int max, a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a > b){
        if (a > c){
            max = a;
        }
        else{
            max = c;
        }
    }
    else{
        if (b > c){
            max = b;
        }
        else{
            max = c;
        }
    }

    printf("Angka maximum adalah %d\n", max);
    return 0;

}
