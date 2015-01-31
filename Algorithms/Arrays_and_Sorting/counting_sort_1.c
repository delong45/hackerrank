#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int count[100];

void count_num(int n, int *array)
{
    int i;

    for (i = 0; i < n; i++) {
        count[array[i]]++;
    }

    for (i = 0; i < 100; i++) {
        printf("%d ", count[i]);
    }
    printf("\n");
}

int main(void)
{
    int i, n;
    scanf("%d", &n);

    int array[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    count_num(n, array);

    return 0;
}
