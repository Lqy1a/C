#include <stdio.h>
int main (void)
{
    int x , y , seki;
    printf("二つの整数を入力してください\n");
    printf("整数1 :"); scanf("%d", &x);
    printf("整数2 :"); scanf("%d", &y);
    seki = x * y;
    printf("それらの積は%dです", seki);
}