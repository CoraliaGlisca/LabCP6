#include <stdio.h>
#include <string.h>

char s1[100],s2[100];

char *strcat_pointer(char *s,char *t);

int main()
{

    gets(s1);
    gets(s2);

    strcat_pointer(s2,&s1);

    printf("s1= %s", s1);
}

char *strcat_pointer(char *s, char *t)
{
    while(*t)
    {
        t++;
    }

    while(*s)
    {
        *t=*s;
        s++;
        t++;
    }

    *t='\0';
}
