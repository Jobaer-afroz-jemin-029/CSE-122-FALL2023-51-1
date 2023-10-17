#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,in=0,out=0,max=0;
cin>>n;
for(int i=0;i<n;i++){
int x,y;
cin>>x>>y;
in=in-x;
in=in+y;
if(max<in)
max=in;
}
cout<<max<<endl;

   return 0;
}
