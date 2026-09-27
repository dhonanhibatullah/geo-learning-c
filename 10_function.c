#include <stdio.h>

float rectangle_area(float length, float width) {
    float area = length * width;
    return area;
}

int main() {
    float my_rect_length = 10.0;
    float my_rect_width = 3.3;

    float luas = rectangle_area(my_rect_length, my_rect_width);

    printf("PANJANG : %.5f\n", my_rect_length);
    printf("LEBAR   : %.5f\n", my_rect_width);
    printf("LUAS    : %.5f\n", luas);

    return 0;
}