#include <stdio.h>

int main()
{
    int nilai_mahasiswa[8] = {100, 100, 90, 80, 95, 100, 70, 0};

    int sum_nilai = 0;
    float average = 0.0;

    // menghitung jumlah seluruh nilai mahasiswa
    // i += 1  ===   i = i + 1

    for (int i = 0; i < 8; i += 1)
    {
        sum_nilai += nilai_mahasiswa[i];
    }

    average = (float)sum_nilai / 8.0;

    printf("Rerata nilai mahasiswa: %f\n", average);
}