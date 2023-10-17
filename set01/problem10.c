#include <stdio.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main()
{
    int result;
    char string1[100],string2[100];
    input_two_strings(string1,string2);
    stringcompare(string1,string2);
    output(string1,string2,result);
    
}