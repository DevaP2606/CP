#include <stdio.h>
#include <math.h>

float dist(int p, int q, int r, int s)
{
    float distance;
    distance = sqrt(pow((p - r), 2) + pow((q - s), 2));
    return distance;
}

int main()
{

    int a, b, c, d, e, f;
    float d1, d2, d3, area, s;
    printf("Enter coordinates: ");
    scanf("%d,%d,%d,%d,%d,%d", &a, &b, &c, &d, &e, &f);
    d1 = dist(a, b, c, d);
    d2 = dist(c, d, e, f);
    d3 = dist(a, b, e, f);
    s = (d1 + d2 + d3) / 2;
    area = sqrt(s * (s - d1) * (s - d2) * (s - d3));
    printf("area is: %.2f", area);

    return 0;
}