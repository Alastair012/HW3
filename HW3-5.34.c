#include <stdio.h>

int power(int base, int exponent) {
    if (exponent == 1)
        return base;
    else
        return base * power(base, exponent - 1);
}

int main() {
    int b, e;
    scanf("%d %d", &b, &e);
    printf("%d\n", power(b, e));
    return 0;
}

