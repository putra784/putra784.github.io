#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number;
    unsigned long long result;

    printf("Masukkan bilangan: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Faktorial tidak ada untuk bilangan negatif.\n");
    } else {
        result = factorial(number);
        printf("Faktorial dari %d adalah %llu\n", number, result);
    }

    return 0;
}