#include <stdio.h>

int main()
{
    /* ______[ CONTOH PENJUMLAHAN ]______ */
    int a = 0;
    int b = 0;

    printf("Masukkan angka pertama: ");
    scanf("%d", &a);

    printf("Masukkan angka kedua  : ");
    scanf("%d", &b);

    int c = a + b;
    printf("HASIL PENJUMLAHAN     : %d\n", c);

    /* ______[ CONTOH STRING ]______ */

    // char nama[64];
    // printf("Masukkan nama lengkap: ");
    // scanf("%[^\n]", nama);

    // printf("NAMA LENGKAP         : %s\n", nama);

    /* ______[ CONTOH DIPISAH PAKE SPASI ]______ */

    // int tinggi_siswa[5];
    // printf("Masukkan 5 tinggi siswa:\n");
    // scanf("%d %d %d %d %d",
    //       &tinggi_siswa[0],
    //       &tinggi_siswa[1],
    //       &tinggi_siswa[2],
    //       &tinggi_siswa[3],
    //       &tinggi_siswa[4]);

    // int sum = 0;
    // float average = 0.0;

    // for (int i = 0; i < 5; ++i)
    // {
    //     sum += tinggi_siswa[i];
    // }
    // average = (float)sum / 5.0;

    // printf("Rerata tinggi siswa: %f\n", average);

    /* ______[ CONTOH BANYAK DATA ]______ */

    // int jumlah_siswa = 0;
    // printf("Masukkan jumlah siswa: ");
    // scanf("%d", &jumlah_siswa);

    // int nilai_siswa[jumlah_siswa];

    // printf("Masukkan nilai-nilai siswa: \n");
    // for (int i = 0; i < jumlah_siswa; i += 1)
    // {
    //     printf("[%2d] Nilai siswa ke-%2d: ", i + 1, i + 1);
    //     scanf("%d", &nilai_siswa[i]);
    // }

    // int sum = 0;
    // float average = 0.0;

    // for (int i = 0; i < jumlah_siswa; ++i)
    // {
    //     sum += nilai_siswa[i];
    // }
    // average = (float)sum / (float)jumlah_siswa;

    // printf("\nRERATA: %f\n", average);

    return 0;
}