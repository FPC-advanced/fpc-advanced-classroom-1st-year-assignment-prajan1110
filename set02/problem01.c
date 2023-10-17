#include <stdio.h>
void input(float *base, float *height);
void find_area(float *base , float *height, float *area);
void output(float *base, float *height, float *area);

int main()
{
    float *base,*height,*area;
    input(&base,&height);
    find_area(&base,&height,&area);
    output(&base,&height,&area);

}
void input(float *base, float *height)
{
    printf("Enter the base of the triangle:\n");
    scanf("%d",&base);
    printf("Enter the height of the triangle:\n");
    scanf("%d",&height);
}
void find_area(float *base , float *height, float *area)
{
    *area=(*base * *height)*0.5;
}
void output(float *base, float *height, float *area)
{
    printf("The area of the triangle is %d",&area);
}