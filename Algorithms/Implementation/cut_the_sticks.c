#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int n;

    scanf("%d", &n);
    int stick[n];

    scanf(" %d",&stick[0]);
    int cut_length = stick[0];

    int i;
    for (i = 1; i < n; i++) {
        scanf(" %d", &stick[i]);
        if (stick[i] < cut_length) {
            cut_length = stick[i];
        }
    }

    int next_cut_length;
    int cut_num = 0;
    while (cut_num < n) {
        printf("%d\n", n - cut_num);
        next_cut_length = 1001;
        for (i = 0; i < n; i++) {
            if (stick[i] > 0) {
                stick[i] -= cut_length;
            } else {
                continue;
            } 
            if (stick[i] <= 0) {
                cut_num++;
            } else if (stick[i] < next_cut_length) {
                next_cut_length = stick[i];
            }
        }
        cut_length = next_cut_length;
    }

    return 0;
}
