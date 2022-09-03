/*  Nama: Jazmy Izzati ALamsyah
    NIM: 18221124
    Tanggal:
    Topik Praktikum: Pengenalan C
    Deskripsi: Program yang dapat mengidentifikasi sifat dari 3 integer, mencari nilai max, dan mencari nilai min
*/

#include <stdio.h>

#define max(a, b) ((a > b) ? a : b)
#define min(a, b) ((a < b) ? a : b)
 
/* PROCEDURE DAN FUNCTION*/

void CekInteger (int x);

void CekInteger (int x){
    if (x > 0) {
        if (x % 2 == 0){
             printf("%d merupakan bilangan genap positif\n", x);
        }
        else {
            printf("%d merupakan bilangan ganjil positif\n", x);
        }
    }
    else if (x < 0){
        printf("%d merupakan bilangan negatif\n", x);
    }
    else{
        printf("%d merupakan bilangan nol\n", x);
    }    
}

int Max(int a, int b, int c);
int Min (int a, int b, int c);

int Max (int a, int b, int c){
    int max1 = max(a,b);
    int max2 = max(max1,c);
    return max2;
}

int Min (int a, int b, int c){
    int min1 = min(a,b);
    int min2 = min(min1,c);
    return min2;
}

int main (){
    int A, B, C, median;

    scanf("%d %d %d", &A, &B, &C);
    
    CekInteger(A);
    CekInteger(B);
    CekInteger(C);

    printf("nilai Max = %d\n", Max(A,B,C));
    printf("nilai Min = %d\n", Min(A,B,C));
    
    median = A + B + C - Max(A,B,C) - Min(A,B,C);
    printf("median = %d\n", median);

    return 0;
}
