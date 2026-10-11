#include <stdio.h>

// Heap allocation

int main() {
    int level_1 = 10; // level_1 dibuat di sini

    if (level_1 < 20) {
        int level_2 = level_1 + 1000; // level_2 dibuat di sini
        printf("level_2 = %d\n", level_2);
    } // level_2 dihancurkan di sini

} // level_1 dihancurkan di sini