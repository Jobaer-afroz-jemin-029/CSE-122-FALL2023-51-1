#include <bits/stdc++.h>
using namespace std;
int main()
{
int n=0, count=0,count1=0;
scanf("%d",&n);
 string arr;
 cin>>arr;


for(int i=0;i<n;i++)
{
  if(arr[i]=='A')
{
  count++;
}
  else if(arr[i]=='D')
  {
  count1++;
  }
}
if(count>count1)
printf("Anton");
else if(count1>count)
printf("Danik");
else
printf("Friendship");
return 0;
}
