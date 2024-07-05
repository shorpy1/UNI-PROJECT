#include <stdio.h>
int main() {
    int n;

    printf("Введіть натуральне число n (1 < n < 150): ");
    scanf("%d", &n);

    if (n <= 1 || n >= 150) {
        printf("Число має бути в діапазоні 1 < n < 150.\n");
        return 1;
    }

    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == n / i) {
            count++;
        }
    }

    printf("Кількість рівних дільників %d дорівнює: %d\n", n, count);
    return 0;
}