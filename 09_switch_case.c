#include <stdio.h>

int main() {
    // char kunci_jawaban = 'A';
    char jawaban_peserta = 'Z';
    int poin_peserta = 0;
    
    // switch-case
    // NOTE: switch-case hanya untuk int dan char
    switch(jawaban_peserta) {
        case 'A':
            poin_peserta += 100;
            break;

        case 'B':
            poin_peserta += 50;
            break;

        case 'C':
            poin_peserta += 0;
            break;

        case 'D':
            poin_peserta -= 10;
            break;

        default:
            printf("Jawaban tidak valid\n");
            break;
    }

    printf("Poin Peserta: %d\n", poin_peserta);

    return 0;
}