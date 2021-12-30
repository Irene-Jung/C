#include <stdio.h>

int main(void)
{
    double x, fx;

    printf("정수를 입력하시오: ");
    scanf("%lf", &x);

    fx = (x * x * x - 20) / (x - 7);
    printf("수식의 값은 %lf입니다.", fx);
    return 0;
}