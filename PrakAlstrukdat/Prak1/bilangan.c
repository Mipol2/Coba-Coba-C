// NIM      :18221124
// Nama     :Jazmy Izzati Alamsyah
// Tanggal  :6 September 2022
// Topik    :Pengenalan C
// Deskripsi:Program untuk menentukan apakah suatu bilangan merupakan bilangan subset genap

#include <stdio.h>

int main(){
    int bilangan;
    scanf("%d", &bilangan);

    if (bilangan % 2 == 0){
        if ((bilangan / 2)%2 == 0){
            printf("Ya\n");
        }
        else {
            printf("Tidak\n");
        }
    }
    else{
        printf("Tidak\n");
    }
    return 0;
    }