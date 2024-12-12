#include <stdio.h>

void Hanoi(int n, char dari, char ke, char bantu) {
    if (n == 1) {
        printf("Pindahkan cakram 1 dari tiang %c ke tiang %c\n", dari, ke);
        return;
    }
    Hanoi(n - 1, dari, bantu, ke);
    printf("Pindahkan cakram %d dari tiang %c ke tiang %c\n", n, dari, ke);
    Hanoi(n - 1, bantu, ke, dari);
}

int main() {
    int n;
    printf("Masukkan jumlah cakram: ");
    scanf("%d", &n);
    printf("Langkah-langkah memindahkan %d cakram:\n", n);
    Hanoi(n, 'A', 'C', 'B');
    return 0;
}