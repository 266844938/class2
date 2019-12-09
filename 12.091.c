#include <stdio.h>
int main(void)
{
    int i, n;
    printf("Enter n:\n");
    scanf("%d", &n);

    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }
    if (i > sqrt(n))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}