#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int i, j;
    int num, gem_num = 0;
    char gem[27] = "abcdefghijklmnopqrstuvwxyz";

    scanf("%d", &num);
    char element[num][100];

    for (i = 0; i < num; i++) {
        scanf("%s", element[i]);
    }

    for (i = 0; i < 26; i++) {
        for (j = 0; j < num; j++) {
            if (strchr(element[j], gem[i]) == NULL) {
                break;
            }
        }
        if (j == num) {
            gem_num++;
        }
    }
    printf("%d\n", gem_num);

    return 0;
}
