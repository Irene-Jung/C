#include <stdio.h>

int main(void)
{
    double square, m2;

    printf("면적을 제곱미터 단위로 입력하시오: ");
    scanf("%lf", &square);
    m2 = square / 3.3058;
    printf("%.2lf제곱미터는 %.2lf평입니다.", square, m2);
    return 0;
}