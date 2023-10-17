#include <stdio.h>
int input(char *a,char *b)
{
    printf("Enter the first string:");
    scanf("%s",a);
    printf("Enter the second string:");
    scanf("%s",b);
}
int compare(char *a,char *b)
{
    int i;
    if(a[i]==b[i])
    {
        printf("The strings are same.");
    }
    else
    if(a[i]!=b[i])
    {
        printf("The strimgs are different.");
    }
}
int main()
{
    char a[100],b[100];
    input(a,b);
    compare(a,b);
    return 0;
}