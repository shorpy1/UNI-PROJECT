#include <stdio.h>
#include <stdlib.h>

int a (int x, int y) {
    if (x == y) return 0;
    int a = 0;
    int distance = y - x;
    int b = 1;

    while (distance > 0) {
        a++;
        distance -= b;
        if (distance <= 0) break;
        a++;
        distance -= b;
        b++;
    }

    return a;
}

int main() {
    int x, y;

    printf("введіть значення x: ");
    scanf("%d", &x);

    printf("введіть значення y: ");
    scanf("%d", &y);

    if (x > y) {
        printf("значення x має бути менше або дорівнювати y.\n");
        return 1;
    }

    int result = a (x, y);
    printf("кількість кроків від %d до %d: %d\n", x, y, result);

    return 0;
}
