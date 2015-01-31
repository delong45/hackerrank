#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int cnt[26];

int main(void)
{
    int odd = 0;
    int i, flag = 0;
    char buf[100001];

    scanf("%s", buf);
    for (i = 0; i < strlen(buf); i++) {
        cnt[buf[i] - 'a']++;
    }

    for (i = 0; i < 26; i++) {
        if (cnt[i] % 2 != 0) {
            odd++;
        }
        if (odd > 1) {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }

    return 0;
}
