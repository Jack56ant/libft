#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static int n_len(int n) {
    int len = 0;

    if (n <= 0)  // `0` veya negatif durumda ekstra alan
        len++;

    while (n) {
        n /= 10;
        len++;
    }

    return len;
}

char *ft_itoa(int n) {
    char *ptr;
    size_t len;
    long num;

    if (n == -2147483648)
        return strdup("-2147483648");

    len = n_len(n);
    ptr = (char *)malloc(len + 1);
    if (!ptr)
        return NULL;

    ptr[len] = '\0';
    num = n;

    if (num < 0) {
        ptr[0] = '-';
        num = -num;
    }

    if (num == 0)
        ptr[0] = '0';

    while (num > 0) {
        ptr[--len] = (num % 10) + '0';
        num /= 10;
    }
    return ptr;
}