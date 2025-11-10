#include <stdio.h>

unsigned long long fibonacci(unsigned int n)
{
    unsigned long long a = 0, b = 1, temp;
    unsigned int i;
    if (n == 0) return 0;
    for (i = 2; i <= n; i++)
    {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

int main(void)
{
    unsigned int n;
    printf("Enter n: ");
    scanf("%u", &n);
    printf("Fibonacci(%u) = %llu\n", n, fibonacci(n));
    return 0;
}

