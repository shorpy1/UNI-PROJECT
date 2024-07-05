#include <stdio.h>
#include <math.h>

int found_circle(double x1, double y1, double r1, double x2, double y2, double r2) {
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    if (distance == 0 && r1 == r2) {
        return -1;
    } else if (distance > r1 + r2 || distance < fabs(r1 - r2)) {
        return 0;
    } else if (distance == r1 + r2 || distance == fabs(r1 - r2)) {
        return 1;
    } else {
        return 2;
    }
}

int main() {
    double x1, y1, r1, x2, y2, r2;

    printf("Введіть координати першого кола (x1, y1, r1): ");
    scanf("%lf %lf %lf", &x1, &y1, &r1);

    printf("Введіть координати другого кола (x2, y2, r2): ");
    scanf("%lf %lf %lf", &x2, &y2, &r2);

    int result = found_circle(x1, y1, r1, x2, y2, r2);

    printf("Кількість точок перетину: %d\n", result);

    return 0;
}