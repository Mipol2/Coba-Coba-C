#include <stdio.h>

/*NIM: 18221124*/
/*Nama:Jazmy Izzati Alamsyah*/
/*Tanggal: 3 Agustus 2022*/
/*Topik praktikum: Pengenalan C*/
/*Deskripsi: program dalam Bahasa C yang mengubah total detik menjadi format jam, menit, dan detik*/

/*Algoritma*/
int main(){
    int detikawal, jam, menit, detik;
    scanf("%d",&detikawal);
    jam = detikawal/3600;
    menit = (detikawal - jam*3600)/60;
    detik = detikawal % 60;
    printf("%d detik = %d jam %d menit %d detik\n", detikawal, jam, menit, detik);
    return 0;
}