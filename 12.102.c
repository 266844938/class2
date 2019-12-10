#include <stdio.h>
#define LEN 5
int main(void)
{
    int a[LEN], i;
    printf("Enter array a:\n");
    for (i = 0; i < LEN; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < LEN; i++)
    {
        printf(" %5d", a[i]);
    }

    return 0;
}
