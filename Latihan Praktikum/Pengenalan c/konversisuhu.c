/*  Nama: Jazmy Izzati ALamsyah
    NIM: 18221124
    Tanggal:
    Topik Praktikum: Pengenalan C
    Deskripsi: Program untuk mengkonversi suhu dari celcius ke yang lain
*/

#include <stdio.h>

int main(){
    float suhu, hasil;
    char konversi;

    scanf("%f\n", &suhu);
    scanf("%c", &konversi);

    if (konversi == 'R'){
        hasil = (4.00 / 5.00) * suhu;
        printf("%.2f", hasil);
    }
    else if (konversi == 'F'){
        hasil = (9.00/5.00 * suhu) + 32.00;
        printf("%.2f", hasil);
    }
    else if (konversi == 'K'){
        hasil = suhu + 273.15;
        printf("%.2f", hasil);
    }
    else{
        printf("Konversi suhu invalid");
    }

    return 0;
}