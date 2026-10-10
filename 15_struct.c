#include <stdio.h>

typedef struct {
    char name[64];
    float attack;
    float defense;
    float magic;
} chara_stats;

void print_chara_desc(chara_stats* stats) {
    printf("[ CHARA DESCRIPTION ]\n");
    printf("NAME   : %s\n", stats->name);
    printf("ATTACK : %f\n", stats->attack);
    printf("DEFENSE: %f\n", stats->defense);
    printf("MAGIC  : %f\n", stats->magic);
    printf("\n");
}

int main() {
    chara_stats axel = {
        .name = "Axel",
        .attack = 100,
        .defense = 50,
        .magic = 60,
    };

    chara_stats black = {
        .name = "Black",
        .attack = 70,
        .defense = 100,
        .magic = 30,
    };

    print_chara_desc(&axel);
    print_chara_desc(&black);

    return 0;
}