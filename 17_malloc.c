#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
    int* maling_angka;

    if (true) {
        int* my_angka = malloc(sizeof(int));
        *my_angka = 12345;

        maling_angka = my_angka; // masukkin alamat di my_angka ke maling_angka
    }

    printf("maling_angka = %d\n", *maling_angka);
    free(maling_angka);
}