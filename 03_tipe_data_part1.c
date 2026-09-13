#include <stdio.h>

int main()
{
    // Tipe data 1: integer (bilangan bulat)
    int umur = 24;

    // Tipe data 2: float (bilangan koma)
    float volume = 10.24;
    float pi = 3.14;

    // Tipe data 3: double (bilangan koma, tapi lebih presisi)
    double latitude_lokasi_dhonan = 3.91824912837891730981;
    double longitude_lokasi_dhonan = 141.291921;

    // Tipe data 4: character
    char a = 'A';
    char b = 'B';

    // Cara ngeprint integer
    printf("Umur saya: %d\n", umur);

    // Cara ngeprint float
    printf("Volume tabung: %f\n", volume);

    // Cara ngeprint double
    printf("Koordinat dhonan: %lf, %lf\n", latitude_lokasi_dhonan, longitude_lokasi_dhonan);

    // Cara ngeprint char
    printf("Ini huruf A: %c\n", a);
}