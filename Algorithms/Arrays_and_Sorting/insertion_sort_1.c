#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

void display(int ar_size, int *ar)
{
    int i;
    for (i = 0; i < ar_size; i++) {
        printf("%d ", ar[i]);
    }
    printf("\n");
}

void insertionSort(int ar_size, int *ar) 
{
    int i;
    int t = ar[ar_size-1];

    for (i = ar_size - 1; i > 0; i--) {
        if (ar[i-1] > t) {
            ar[i] = ar[i-1];
            display(ar_size, ar);
        } else {
            break;
        }   
    }
    ar[i] = t;
    display(ar_size, ar);
}

int main(void) 
{
    int _ar_size;
    scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for (_ar_i = 0; _ar_i < _ar_size; _ar_i++){ 
        scanf("%d", &_ar[_ar_i]); 
    }

    insertionSort(_ar_size, _ar);
        
    return 0;
}
