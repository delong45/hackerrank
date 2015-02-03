#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int sherlock_judge(int a[], int len, int sum)
{
    if (len == 1) {
        return 1;
    }        

    int left_sum = 0;
    int right_sum = sum - a[0];

    int i;
    for (i = 1; i < len - 1; i++) {
        left_sum += a[i - 1]; 
        right_sum -= a[i];
        if (left_sum == right_sum) {
            return 1;
        }
    }

    return 0;
}

int main(void)
{
    int t, n;
    scanf("%d", &t);
    int result[t];

    int i, j, sum;
    for (i = 0; i < t; i++) {
        scanf("%d", &n);
        sum = 0;
        int array[n];
        for (j = 0; j < n; j++) {
            scanf("%d", &array[j]);
            sum += array[j];
        }
        result[i] = sherlock_judge(array, n, sum);
    }

    for (i = 0; i < t; i++) {
        if (result[i] == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
