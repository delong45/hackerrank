#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int num;
    char buf[1000000];

    memset(buf, 0x00, sizeof(buf));
    scanf("%d", &num);

    int i, j;
    int a[num];
    for (i = 0; i < num; i++) {
        scanf("%s", buf);
        int count = 0;
        char *p = buf;
        while (*(p+1) != '\0') {
            if (*p == *(p+1)) {
               count++; 
            }
            p++;
        }
        a[i] = count;
    }

    for (i = 0; i < num; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
