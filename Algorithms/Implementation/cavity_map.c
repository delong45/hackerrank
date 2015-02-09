#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    int n;
    scanf("%d", &n);
    char map[n][n+1];
    
    int i, j;
    for (i = 0; i < n; i++) {
        scanf("%s", map[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == 0 || i == n-1 || j == 0 || j == n-1) {
                printf("%c", map[i][j]);
            } else {
                if (map[i][j] > map[i-1][j] && map[i][j] > map[i+1][j] &&
                    map[i][j] > map[i][j-1] && map[i][j] > map[i][j+1]) {
                    printf("X");
                } else {
                    printf("%c", map[i][j]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
