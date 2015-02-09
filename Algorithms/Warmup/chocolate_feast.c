#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int t, n, c, m;
    scanf("%d", &t);

    while (t--) {
        scanf("%d%d%d",&n,&c,&m);
        int answer = 0; 
        int wrappers = 0;
        answer = wrappers = n / c;
        while (wrappers >= m) {
            int tmp = wrappers / m;
            answer += tmp;
            wrappers = (wrappers % m) + tmp;
        }

        printf("%d\n",answer);
    }
    return 0;
}
