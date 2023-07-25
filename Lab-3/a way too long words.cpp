#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
string s;
cin >>n;
for(int i=0;i<n;i++)
{
  cin >>s;
  int q=s.length();
  if(q>10)
  cout<<s[0]<<q-2<<s[q-1]<<endl;
   else
cout<<s<<endl;
 
}
   return 0;
}
