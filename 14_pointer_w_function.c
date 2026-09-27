#include <stdio.h>

void pengubah_nilai_a_tapi_boong(int in)
{
    in = 100;
}

void pengubah_nilai_a_tapi_beneran(int *in)
{
    *in = 100;
}

int main()
{
    int a = 50;

    // pengubah_nilai_a_tapi_boong(a);
    pengubah_nilai_a_tapi_beneran(&a);

    printf("Nilai a: %d\n", a);
}