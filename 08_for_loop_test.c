#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i += 1)
    {
        printf("[ PERKALIAN %d ]\n", i);

        for (int j = 1; j <= 10; j += 1)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }

        printf("\n");
    }
}