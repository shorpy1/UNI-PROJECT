#include <stdio.h>
#include <math.h>


long long count_numbers(int p) {

    long long total = (long long)pow(2, p);


    long long exclude = 0;
    if (p >= 3) {
        exclude = (p - 2) * (long long)pow(2, p - 3);
    }


    return total - exclude;
}

int main() {
    int p;


    printf("Введіть кількість розрядів (p ≤ 30): ");
    scanf("%d", &p);

    if (p <= 0 || p > 30) {
        printf("Неправильне значення p. Введіть число від 1 до 30.\n");
        return 1;
    }


    long long result = count_numbers(p);
    printf("Кількість чисел з %d розрядів, де три однакові цифри не стоять поруч: %lld\n", p, result);

    return 0;
}