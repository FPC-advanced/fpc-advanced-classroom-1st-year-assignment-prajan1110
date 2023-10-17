#include <stdio.h>
int input_side();
int check_scalene(int a, int b, int c,int isscalene);
void output(int a, int b, int c, int isscalene);

int main()
{
    int a,b,c,isscalene;
    a=input_side();
    b=input_side();
    c=input_side();  
    isscalene=check_scalene(a,b,c,isscalene);
    output(a,b,c,isscalene);
    return 0;
}
input_side()
{
    int a;
    printf("Enter the side:\n");
    scanf("%d",&a);
    return a;
}
check_scalene(int a, int b, int c,int isscalene)
{
    if(a==b && b==a && c!=a && c!=b)
    {
        printf("The given triangle is Scalene");
        
    }
    else
    {

    }
}