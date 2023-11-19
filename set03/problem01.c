#include <stdio.h>

void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);

int main()
{
    float x1,x2,y1,y2;
    input(&x1,&y1,&x2,&y2);
    float distance;
    distance=find_distance(x1,y1,x2,y2);
    output(x1,y1,x2,y2,distance);
    return 0;
}
void input(float *x1, float *y1, float *x2, float *y2)
{
   printf("Enter the co-drdinates of point 1:\n");
   scanf("%f %f",x1,y1);
   printf("Enter the co-drdinates of point 2:\n");
   scanf("%f %f",x2,y2);
}
float find_distance(float x1, float y1, float x2, float y2)
{
    float X,Y;
    X=x2-x1;
    Y=y2-y1;

    float sqdis=X * X + Y * Y;

    float distance=sqdis;
    float temp;
    int i;

    for (i=0;i<20;i++)
    {
        temp=(distance + sqdis/distance)/2;
        if (temp == distance)
        {
            break;
        }
      distance =temp;
    }
    return distance;
}
void output(float x1, float y1, float x2, float y2, float distance)
{
    printf("The Distance betwwen Point 1(%.2f , %.2f) and Point 2(%.2f , %.2f) is %.2f\n",x1,y1,x2,y2,distance);
}