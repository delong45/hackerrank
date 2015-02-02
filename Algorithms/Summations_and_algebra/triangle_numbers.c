#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int find_even_number(long n)
{
    if (n % 2 != 0) {
        return 2;
    } else {
        if ((n / 2) % 2 == 0) {
            return 3;
        } else {
            return 4;
        }
    }
}

int main(void)
{
    int t;
    scanf("%d", &t);
    long rows[t];

    int i;
    long position;
    for (i = 0; i < t; i++) {
        scanf("%ld", &rows[i]);
    }

    for (i = 0; i < t; i++) {
        position = find_even_number(rows[i]);
        printf("%ld\n", position);
    }

    return 0;
}
