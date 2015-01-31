#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int i, num;
    scanf("%d", &num);

    unsigned int s = (unsigned int)(pow(2, 32) - 1);

    unsigned int a[num];
    for (i = 0; i < num; i++) {
        scanf("%u", &(a[i]));
        a[i] = a[i] ^ s;
    }

    for(i = 0; i < num; i++) {
        printf("%u\n", a[i]);
    }

    return 0;
}
