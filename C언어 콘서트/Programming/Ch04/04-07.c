#include <stdio.h>
#include <math.h>

int main(void)
{
    int x1, x2, y1, y2;
    double distance;

    printf("첫번째 점 (x1,y1): ");
    scanf("%d %d", &x1, &y1);
    printf("두번째 점 (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    distance =  sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("Distance = %lf", distance);
    return 0;
}