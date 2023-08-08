#include<stdio.h>
#include<string.h>
#include <ctype.h>
#include <stdlib.h>
int main(){
    char s[101],s1[101];
gets(s);
gets(s1);
strlwr(s);
strlwr(s1);
int  n;
n=strcmp(s,s1);

printf("%d",n);
    return 0;
}
