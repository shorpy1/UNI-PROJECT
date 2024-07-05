#include <stdio.h>
#include <string.h>

unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

unsigned long long countAnagrams(char *word) {
    int length = strlen(word);
    unsigned long long totalAnagrams = factorial(length);

    int counts[256] = {0};

    for (int i = 0; i < length; i++) {
        counts[(int)word[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (counts[i] > 0) {
            totalAnagrams /= factorial(counts[i]);
        }
    }
    return totalAnagrams;
}
int main() {
    char word[15];
    printf("Введіть слово: ");
    scanf("%14s", word);

    unsigned long long result = countAnagrams(word);
    printf("Кількість можливих анаграм: %llu\n", result);
    return 0;
}
