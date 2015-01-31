#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int num;
    scanf("%d", &num);

    int i, j, k;
    int m, n, output[num][2];

    for (i = 0; i < num; i++) {
        scanf("%d", &m);
        scanf("%d", &n);
        int flavor[n], flag = 0;
        for (j = 0; j < n; j++) {
            scanf(" %d", &flavor[j]);
        }
        for (j = 0; j < n; j++) {
            if (flavor[j] >= m) {
                continue;
            }
            output[i][0] = j+1; 
            for (k = j+1; k < n; k++) {
                if (flavor[j] + flavor[k] == m) {
                    output[i][1] = k+1;
                    flag = 1;
                    break;
                }
            }
            if (flag == 1) {
                break;
            }
        }
    }

    for (i = 0; i < num; i++) {
        printf("%d %d\n", output[i][0], output[i][1]);
    }

    return 0;
}
