#include <stdio.h>


int nsd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int nsk(int a, int b) {
    return (a * b) / nsd(a, b);
}

int main() {
    int n;


    printf("Введіть кількість чисел (2 ≤ p ≤ 20): ");
    scanf("%d", &n);

    if (n < 2 || n > 20) {
        printf("Кількість чисел повинна бути в діапазоні від 2 до 20.\n");
        return 1;
    }

    int numbers[n];


    printf("Введіть %d натуральних чисел, розділених пробілом: ", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &numbers[i]);
    }


    int result = numbers[0];
    for (int i = 1; i < n; ++i) {
        result = nsk(result, numbers[i]);
    }

    printf("Найменше спільне кратне заданих чисел: %d\n", result);

    return 0;
}