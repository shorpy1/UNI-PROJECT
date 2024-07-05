#include <stdio.h>
double found_time(double t1, double t2, double t3) {
    double all_time = (1.0 / t1 + 1.0 / t2 + 1.0 / t3);
    return 1.0 / all_time;
}
int main() {
    double t1, t2, t3;
    printf("Введіть три числа від 1 до 10000 (t1, t2, t3): ");
    if (scanf("%lf %lf %lf", &t1, &t2, &t3) != 3) {
        printf("Помилка вводу. Будь ласка, введіть три числа.\n");
        return 1;
    }
    if (t1 <= 0 || t2 <= 0 || t3 <= 0 ||  t1 > 10000 ||  t2 > 10000 || t3 > 10000) {
        printf("Помилка! Не виконується умова (1<n<10000)\n");
        return 1;
    }
    double result = found_time(t1, t2, t3);
    printf("Час, потрібний для з'їдання одного пирога всіма гостями разом: %.2f годин\n", result);

    if (result < 1) {
        double all_minutes = result * 60;
        printf("Це приблизно %.0f хвилин.\n", all_minutes);
    }
    return 0;
}