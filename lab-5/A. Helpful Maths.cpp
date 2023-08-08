#include<stdio.h>
#include<string.h>
#include <ctype.h>
#include <stdlib.h>
int main(){
    char s[300];
gets(s);
int n=strlen(s);
for(int i=0;i<n-1;i+=2)
{
  for(int j=i+2;j<n;j+=2)
  {
    if(s[j]<s[i])
    {
      int temp=s[j];
      s[j]=s[i];
      s[i]=temp;
    }
  }
}
puts(s);

    return 0;
}
