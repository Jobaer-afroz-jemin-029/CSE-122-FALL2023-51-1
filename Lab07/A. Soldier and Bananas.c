#include<stdio.h>

int main()
{
int p=0,k,n,w;
scanf("%d %d %d",&k,&n,&w);
for(int i=1;i<=w;i++)
p=p+k*i;
if(p>n)
printf("%d",p-n);
else
printf("0");


return 0;
}
