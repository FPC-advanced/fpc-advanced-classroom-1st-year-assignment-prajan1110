#include <stdio.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);

int main()
{
    float x1,x2,x3,y1,y2,y3;
    input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
    int result;
    result= is_triangle(x1,y1,x2,y2,x3,y3);
    output(x1,y1,x2,y2,x3,y3,result);
    return 0;
}
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("Enter the co-ordinates of Point 1:\n");
    scanf("%f %f",x1,y1);
    printf("Enter the co-ordinates of Point 2:\n");
    scanf("%f %f",x2,y2);
    printf("Enter the co-ordinates of Point 3:\n");
    scanf("%f %f",x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
    float slope1=(y2-y1)/(x2-x1);
    float slope2=(y3-y2)/(x3-x2);

    return slope1 != slope2;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
    if (result)
    {
        printf("The Point 1 (%.2f , %.2f) , Point 2 (%.2f , %.2f) and Point 3 (%.2f , %.2f) form a Triangle.\n",x1,y1,x2,y2,x3,y3);
    }
    else
    {
        printf("The points don't form a Tringle.\n");
    }
}