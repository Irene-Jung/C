#include <stdio.h>

int main(void)
{
    int n, l;

    printf("정수를 입력하시오: ");
    scanf("%d", &n);
    printf("백의 자리수: %d\n", n / 100);
    l = n % 100;
    printf("십의 자리수: %d\n", l / 10);
    l = l % 10;
    printf("일의 자리수: %d\n", l / 1);
    return 0;
}