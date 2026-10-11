#include <stdio.h>
#include <stdlib.h>

int main() {
    // // KASUS INTEGER BIASA
    // int a;
    // printf("isi integer: %d\n", a);

    // // KASUS ARRAY
    // int tanah[100];
    // printf("isi tanah: %d\n", tanah[98]);

    // KASUS MALLOC
    int* tanah_malloc = malloc(100 * sizeof(int));
    printf("KASUS MALLOC\n");
    for (int i = 0; i < 100; ++i) {
        printf("%d\n", tanah_malloc[i]);
    }
    printf("\n");

    int* tanah_calloc = calloc(1, 100*sizeof(int));
    printf("KASUS CALLOC\n");
    for (int i = 0; i < 100; ++i) {
        printf("%d\n", tanah_calloc[i]);
    }

    free(tanah_malloc);
    free(tanah_calloc);
    return 0;
}