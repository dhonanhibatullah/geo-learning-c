#include <stdio.h>

// Membuat aplikasi filter umur
// Umur di bawah 40, program ngeprint "dilarang jadi wapres"
// Umur lebih dari atau sama dengan 40, "boleh jadi wapres"

int main()
{
    int umur_cawapres = 101;

    // satpam / guard
    if (umur_cawapres < 0)
    {
        printf("Umur tidak valid, bernilai negatif: %d\n", umur_cawapres);
    }
    else if (umur_cawapres >= 100)
    {
        printf("Umur terlalu tua: %d\n", umur_cawapres);
    }

    // kasus sesungguhnya
    else if (umur_cawapres < 40)
    {
        printf("dilarang jadi wapres, karena umurnya masih %d\n", umur_cawapres);
    }
    else
    {
        printf("boleh jadi wapres, karena umurnya sudah %d\n", umur_cawapres);
    }
}