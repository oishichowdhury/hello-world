#include <stdio.h>
int main()
{
    int c;
    for (c = 0; c < 301; c += 20) {
        printf("c=%d f=%f\n", c, c * 1.8 + 32);       
    }
    return 0;
}
