#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,count1=0;

    string s,t;
    cin>>s>>t;

int j=s.length();
  for(int i=0;i<s.length();i++){
    if(s[i]==t[j-1])
        count++;
  j--;
  }
  if(count==s.length())
  {
      cout<<"YES";
  }
else
    cout<<"NO";

return 0;
}
