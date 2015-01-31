#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char lower[27] = "abcdefghijklmnopqrstuvwxyz";
    char upper[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char string[1000] = {0};

    fgets(string, sizeof(string), stdin);

    int i;
    for (i = 0; i < 26; i++) {
        if (strchr(string, lower[i]) || strchr(string, upper[i])) 
            continue;
        else {
            break;
        }
    }

    if (i == 26) {
        printf("pangram\n");
    } else {
        printf("not pangram\n");
    }

    return 0;
}
