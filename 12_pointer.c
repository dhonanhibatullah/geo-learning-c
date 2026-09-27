#include <stdio.h>

int main()
{
    int a = 100;
    int *ptr_a = &a;

    // printf("Nilai a : %d\n", a);
    // printf("Alamat a: %ul\n", (unsigned)ptr_a);

    int b = *ptr_a;

    printf("Nilai a: %d\n", a);
    printf("Nilai b: %d\n", b);

    return 0;
}