#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Tipe data boolean
    int umur_minimum_merokok = 21;
    int umur_dhonan = 15;

    bool keputusan = umur_dhonan >= umur_minimum_merokok;

    // if (keputusan)
    // {
    //     printf("Boleh merokok\n");
    // }
    // else
    // {
    //     printf("Tidak boleh merokok\n");
    // }

    // Array cara pertama
    int nilai_siswa[3];
    nilai_siswa[0] = 75;
    nilai_siswa[1] = 80;
    nilai_siswa[2] = 100;
    // printf("Nilai siswa: %d, %d, %d\n", nilai_siswa[0], nilai_siswa[1], nilai_siswa[2]);

    // Array cara kedua
    int usia_mahasiswa[3] = {18, 19, 18};
    // printf("Usia mahasiswa: %d, %d, %d\n", usia_mahasiswa[0], usia_mahasiswa[1], usia_mahasiswa[2]);

    // String = Array of Char
    char bio_instagram[200] = "Nama saya Dhonan, salam kenal";
    printf("%s\n", bio_instagram);
}