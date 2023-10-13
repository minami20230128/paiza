#include <stdio.h>

int main(void)
{
    int l, m;
    scanf("%d", &l);
    scanf("%d", &m);
    if(l >= 25 && m <= 40)
    {
        printf("No");
    }
    else if(l >= 25 || m <= 40)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}