#include <stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);

int main()
{
    int n,result;
    n=input_number();
    result=is_composite(n);
    output(n,result);
    return 0;
}
int input_number()
{
    int a;
    printf("Enter the number:\n");
    scanf("%d",&a);
    return a;
}
int is_composite(int n)
{
   int i ;
   if (n<=1)
   {
    return 0;
   }
   for(i=2;i<=n/2;i++)
   {
    if (n%i==0)
    {
        return 1;
    }
   }
   return 0;
}
void output(int n, int result)
{
    if (result)
    {
        printf("%d is composite number \n",n);
    }
    else
    {
        printf("%d is not a composite number ",n);
    }
}

