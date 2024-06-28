#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: ALways 0 (Success)
 */

int main()
{
    int n = 98;
    int a = 1, b = 2;


    printf("%d, %d", a, b);


    for (int i = 3; i <= n; ++i) {
        int next = a + b;
        printf(", %d", next);
        a = b;
        b = next;
    }

    printf("\n");

    return 0;
}
