#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char buf[82];

int main(void)
{
    int length;
    scanf("%s", buf);
    length = strlen(buf);

    int lower_limit, upper_limit;
    lower_limit = floor(sqrt(length));
    upper_limit = ceil(sqrt(length));

    int flag = 0;
    int rows, columns;
    for (rows = lower_limit; rows <= upper_limit; rows++) {
        for (columns = lower_limit; columns <= upper_limit; columns++) {
            if (rows * columns >= length) {
                flag = 1;
                break;
            }
        }
        if (flag) {
            break;
        }
    }

    char output[rows][columns];
    int i,j,k;
    for (i = 0, j = 0; j < rows; j++, i++) {
        for (k = 0; k < columns; k++, i++) {
            if (i < length) {
                output[j][k] = buf[i];
            } else {
                output[j][k] = '\0';
            }
        }
        i--;
    }

    for (i = 0; i < columns; i++) {
        for (j = 0; j < rows; j++) {
            if (output[j][i] != '\0') {
                printf("%c", output[j][i]);
            }
        }
        printf(" ");
    }
    printf("\n");
}
