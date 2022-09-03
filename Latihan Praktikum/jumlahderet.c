/*  
    Nama: Jazmy Izzati ALamsyah
    NIM: 18221124
    Tanggal:
    Topik Praktikum: Pengenalan C
    Deskripsi: 
*/

#include <stdio.h>

int main(){
    int a, total;
    total = 0;
    scanf("%d", &a);

    for(int i=0; i<= a; i++){
        total += i;
    }

    printf("Jumlah deret dari 1 sampai %d adalah %d\n", a, total);
    return 0;
}