// NIM      :18221124
// Nama     :Jazmy Izzati Alamsyah
// Tanggal  :6 September 2022
// Topik    :Pengenalan C
// Deskripsi:Program untuk menentukan frekuensi kemunculan bilangan 0-9 dalam sebuah string


#include <stdio.h>
#include <string.h>


int main(){
    int i = 0;
    int len, j, count;
    int temp = 48;
    char str[11];
    char frekuensi[11] = "0000000000";
    
    scanf("%s", &str);
    len = strlen(str);
    
    while (i<=9){
        j = 0;
        count = 48;
        while(j <= len){
            if(str[j] == (char)temp){
                count += 1;
            }
            j++;
        }
        frekuensi[i] = (char)count;
        temp++;
        i++;
    }

    printf("%s\n", frekuensi);
    return 0;
    }