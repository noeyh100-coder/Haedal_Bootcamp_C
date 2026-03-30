#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void hanoi(int n, int from, int tmp, int to) {
    if (n == 1) {
        printf("%d %d\n", from, to);
        return;
    }
    hanoi(n - 1, from, to, tmp);
    printf("%d %d\n", from, to);
    hanoi(n - 1, tmp, from, to);
}

int main() {
    int n;

    if (scanf("%d", &n) != 1) return 0;

    int total_moves = (int)pow(2, n) - 1;
    printf("%d\n", total_moves);

    hanoi(n, 1, 2, 3);

    return 0;
}