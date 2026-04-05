#include <stdio.h>

struct Player {
    int score;
    int level;
};

// Function receives the address, saving memory
void updateScore(struct Player *p) {
    p->score += 10;
}

int main() {
    struct Player p1 = {50, 5};
    updateScore(&p1);
    printf("New Score: %d\n", p1.score);
    return 0;
}