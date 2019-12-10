#include <stdio.h>

int main(void)
{
    int a[5], i;
    printf("Enter array a:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf(" %5d", a[i]);
    }

    return 0;
}
