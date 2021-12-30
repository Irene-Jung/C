#include <stdio.h>

int main(void)
{
    double x, y;
    int z;

    printf("2개의 실수를 입력하시오:");
    scanf("%lf %lf", &x, &y);
    
    z = (int)x + (int)y;
    printf("합의 정수부 = %d", z);
    return 0;
}