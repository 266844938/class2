#include <stdio.h>
#define LEN 5
int main(void)
{
    int a[LEN], max, i;
    printf("Enter an array\n");
    for (i = 0; i < LEN; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, LEN);
    for (i = 0; i < LEN; i++)
    {
        printf("%5d", a[i]);
    }
    return 0;
}
void sort(int x[], int n)
{
    int tmp, i, j, k;
    for (i = 0; i < n - 1; i++)
    {
        k = i;
        for (j = i + 1; j < n; j++)
        {
            if (x[j] > x[k])
            {
                k = j;
            }
        }
        if (k != i)
        {
            tmp = x[i];
            x[i] = x[k];
            x[k] = tmp;
        }
    }
}