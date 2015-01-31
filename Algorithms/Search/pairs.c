#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void quick_sort(int* a, int left, int right)
{
    if (left >= right) {
        return;
    }

    int mid = (left + right) / 2;
    swap(&a[left], &a[mid]);

    int value = a[left];
    int i = left;
    int j = right + 1;

    while (1) {
        do i++; while (a[i] < value && i <= right);
        do j--; while (a[j] > value);
        if (i > j) {
            break;
        }
        swap(&a[i], &a[j]);
    }
    swap(&a[left], &a[j]);
    quick_sort(a, left, j - 1);
    quick_sort(a, j + 1, right);
}

int binary_search(int* a, int a_size, int v)
{
    int l, r, m;

    l = 0;
    r = a_size - 1;

    while (l <= r) {
        m = (l + r) / 2;
        if (a[m] < v) {
            l = m + 1;
        } else if (a[m] > v) {
            r = m - 1;
        } else {
            return 0;
        }
    }
    return -1;
}

int pairs(int a_size, int* a, int k) 
{
    int i;
    int ans = 0;
           
    quick_sort(a, 0, a_size - 1);
    for (i = 0; i < a_size; i++) {
        int value = a[i] - k;
        if (value <= 0) {
            continue;
        }
        if (binary_search(a, a_size, value) == 0) {
            ans++;
        }
    }

    return ans;
}

int main() 
{
    int res;

    int _a_size,_a_i,_k;
    scanf("%d %d", &_a_size,&_k);
    int _a[_a_size];
    for(_a_i = 0; _a_i < _a_size; _a_i++) { 
        int _a_item;
        scanf("%d", &_a_item);

        _a[_a_i] = _a_item;
    }
    res=pairs(_a_size,_a,_k);
    printf("%d\n",res);    
    return 0;
}
