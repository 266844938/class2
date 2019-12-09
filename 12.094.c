#include <stdio.h>
int isleapYear(int x)
{
    int i;
    for (i = 2000; i<= 2050; i++)
    {
        if ((i % 4==0 && i % 400!=0)||(i % 400==0)){     
            return 1;
        }else{
             return 0;
        }
    }
   
}
int main(void)
{
 int i, flag,count=0;
    for (i = 2000; i <= 2050; i++)
    {
        flag = isleapYear(i);
        if (flag == 1)
        {
            printf("%5d", i);
           count++;
        }
    } 
     printf("%5d", count);
    return 0;
}
错了
