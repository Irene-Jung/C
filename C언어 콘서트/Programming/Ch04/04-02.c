#include <stdio.h>

int main(void)
{
    int x;

    printf("첫 번째 정수를 입력하시오: ");
    scanf("%d", &x);
    printf("세제곱값은 %d*%d*%d = %d", x, x, x, x*x*x);
    return 0;
}