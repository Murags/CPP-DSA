#include <stdio.h>


int main() {
    int x = 0;
    int y = 20;

    while (y > 6) {
        y = y - 4;
        x = x + 2;
    }

    printf("%d\n", x);

    return 0;
}
