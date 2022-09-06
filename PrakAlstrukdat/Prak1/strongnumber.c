// NIM      :18221124
// Nama     :Jazmy Izzati Alamsyah
// Tanggal  :6 September 2022
// Topik    :Pengenalan C
// Deskripsi:Program untuk menentukan apakah suatu bilangan merupakan bilangan strongnumber


#include <stdio.h>

int main(){
    int bilangan, temp, fact, i, hasil, x;
    scanf("%d",&bilangan);
    x = bilangan;
    hasil = 0;

    while (bilangan){
        i = 1;
        fact = 1;
        temp = bilangan % 10;
        while(i <= temp){
            fact = fact * i;
            i++;
        }
        hasil += fact;
        bilangan = bilangan / 10;
    }
    
    if(x == hasil){
        printf("Y\n");
    }
    else{
        printf("N\n");
    }
    return 0;
}
