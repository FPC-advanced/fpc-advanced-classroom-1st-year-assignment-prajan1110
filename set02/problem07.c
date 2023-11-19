#include <stdio.h>

struct _triangle
{
	float base, altitude, area;
};
typedef struct _triangle Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);

int main()
{
    Triangle t;
    t=input_triangle();
    find_area(&t);
    output(t);
    return 0;
}
Triangle input_triangle()
{
    Triangle t;
    printf("Enter the base and altitude of the triangle:\n");
    scanf("%f %f", &t.base,&t.altitude);
    return t;
}
void find_area(Triangle *t)
{
    t->area = 0.5 * t->base * t->altitude;
}
void output(Triangle t)
{
    printf("The base of the triangle is %.2f\n",t.base);
    printf("The altitude of the triangle is %.2f\n",t.altitude);
    printf("The area of the triangle is %.2f\n",t.area);
}