#include <stdio.h>
#include <stdlib.h>

int main() {
    int* gambar = malloc(1024 * 1024 * sizeof(int)); // gambar dibuat di sini

    int image[1024 * 1024]; // image dibuat di sini

    free(gambar); //gambar dihapus di sini
    return 0;
} // image dihapus di sini