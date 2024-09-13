#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

bool Prima(int n) {
    // Bilangan kurang dari 2 bukan bilangan prima
    if (n < 2) {
        return false;
    }

    // Memeriksa faktor dari 2 sampai akar kuadrat n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; // Jika n habis dibagi i, maka n bukan bilangan prima
        }
    }

    return true; // Jika tidak ditemukan faktor, maka n adalah bilangan prima
}

int main () {
    int a;
    scanf("%d", &a);

    if (Prima(a))
    {
        printf("PRIMA");
    } else {
        printf("BUKAN");
    }
}