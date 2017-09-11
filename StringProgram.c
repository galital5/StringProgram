#include <stdio.h>
int stringLength(char s[]);
void stringBacwards(char s[]);
void charArray( char *x, int length);

int main()
{

    char arr[5];
    char *x = &arr;
    charArray(x, 5);
}

int stringLength(char s[])
{
    int i=0;
    while(s[i] != '\0')
        i++;
    return i;
}

void stringBacwards(char s[])
{
    int i=0;
    char temp;
    for(i; i<stringLength(s)/2; i++ )
    {
        temp=s[i];
        s[i] = s[stringLength(s)-i];
        s[stringLength(s)-i] = temp;
    }
}

void charArray( char *x, int length)
{
    int i = 0;
    char c = getchar();
    while(c!='\n')
    {
        if(i<length-1)
        {
            x[i] = c;
            c=getchar();
        }

        else
        {
            x[i] = '\0';
            c='\n';
        }

        i++;
    }
     x[i-1]='\0';
    printf("%s", x);
}





















