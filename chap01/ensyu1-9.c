#include <stdio.h>
int main (void)
{
    int x , y , z , wa;
    printf("三つの整数を入力してください\n");
    printf("整数1 :"); scanf("%d", &x);
    printf("整数2 :"); scanf("%d", &y);
    printf("整数3 :"); scanf("%d", &z);
    wa = x + y + z;
    printf("三つの和は%dです", wa);
}