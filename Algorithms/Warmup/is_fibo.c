#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

long long fib[50];

void fibonacci(void)
{
    int i;
    fib[0] = 0;
    fib[1] = 1;

    for (i = 2; i < 50; i++) {
       fib[i] = fib[i-1] + fib[i-2];
    }
}

int is_fibo(long long n)
{
    if (n == 0 || n == 1) {
        return 1;
    }

    int left = 0;  
    int right = 50 - 1;
    int mid;

    while (left <= right) {
        mid = (left + right)/2;
        if (fib[mid] < n) {
            left = mid + 1;
        } else if (fib[mid] > n) {
            right = mid - 1;
        } else {
            return 1;
        }
    }
    return 0;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    long long a[n];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%ld", &a[i]);
    }
    fibonacci();

    for (i = 0; i < n; i++) {
        if (is_fibo(a[i])) {
            printf("IsFibo\n");
        } else {
            printf("IsNotFibo\n");
        }
    }

    return 0;
}
