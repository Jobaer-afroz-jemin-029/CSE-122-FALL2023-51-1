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

// for(int i=0;i<strlen(s);i++)
// if(s[i]>s1[i])
// {
//   printf("1");
//   break;
// }
// else if(s[i]<s1[i])
// {
//   printf("-1");
//   break;
// }

printf("%d",n);
    return 0;
}
