#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int n,m;
    scanf("%d %d", &n, &m);

    char buf[n][m+1];
    int i, j, k;
    for (i = 0; i < n; i++) {
        scanf("%s", buf[i]);
    }

    int count;
    int max_topic_num = 0, max_term_num = 0;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            count = 0;
            for (k = 0; k < m; k++) {
               if (buf[i][k] == '1' || buf[j][k] == '1') {
                   count++;
               }
            }
            if (count > max_topic_num) {
                max_topic_num = count;
                max_term_num = 1;
            } else if (count == max_topic_num) {
                max_term_num++;
            }
        }
    }
    printf("%d\n", max_topic_num);
    printf("%d\n", max_term_num);

    return 0;
}
