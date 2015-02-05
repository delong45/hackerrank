#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char w[100000][101];

void resort(char string[], int left, int right)
{
    while (right - left >= 1) {
        char tmp = string[left];
        string[left] = string[right];
        string[right] = tmp;
        left++;
        right--;
    }
}

void find_smallest_bigger(char string[], int len)
{
    int i, j, flag = 0;
    for (i = len - 2; i >= 0; i--) {
        for (j = i + 1; j < len; j++) {
            if (string[j] > string[i] && (string[j+1] <= string[i] || string[j+1] == '\0')) {
                char tmp = string[i];
                string[i] = string[j];
                string[j] = tmp;

                resort(string, i + 1, len - 1);
                flag = 1;
                break;
            }
        }
        if (flag == 1) break;
    }

    if (i < 0) {
        sprintf(string, "no answer");
    }
}

int main(void)
{
    int t;
    scanf("%d", &t);

    int i;
    for (i = 0; i < t; i++) {
        scanf("%s", w[i]);
    }
    for (i = 0; i < t; i++) {
        find_smallest_bigger(w[i], strlen(w[i]));
        printf("%s\n", w[i]);
    }
    return 0;
}
