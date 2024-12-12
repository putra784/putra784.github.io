#include <stdio.h>

int fpb(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int kpk(int a, int b) {
    return (a / fpb(a, b)) * b;
}

int main() {
    int num1, num2;
    printf("Masukkan 2 nilai: ");
    scanf("%d %d", &num1, &num2);
    int result = kpk(num1, num2);
    printf("Kelipatan Persekutuan Terkecil dari %d dan %d adalah %d\n", num1, num2, result);
    return 0;
}