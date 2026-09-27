#include <stdio.h>

int main()
{
    int daftar_skor[3] = {80, 90, 100};

    int *ptr_skor_pertama = daftar_skor + 0;
    int *ptr_skor_kedua = daftar_skor + 1;
    int *ptr_skor_ketiga = daftar_skor + 2;

    int skor_pertama = *ptr_skor_pertama;
    int skor_kedua = *ptr_skor_kedua;
    int skor_ketiga = *ptr_skor_ketiga;

    printf("%d %d %d\n", skor_pertama, skor_kedua, skor_ketiga);

    return 0;
}