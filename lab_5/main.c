#include <stdio.h>


long long found_consistent(int n) {
    if (n == 1) return 2;
    if (n == 2) return 4;
    if (n == 3) return 7;

    long long dp[n+1];
    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 4;

    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }

    return dp[n];
}

int main() {
    int n;
    printf("Введіть довжину послідовності (1 < n < 10000): ");
    scanf("%d", &n);

    if (n <= 1 || n >= 10000) {
        printf("Некоректне значення n.\n");
        return 1;
    }

    long long result = found_consistent(n);
    printf("Кількість допустимих послідовностей довжиною %d: %lld\n", n, result);

    return 0;
}
