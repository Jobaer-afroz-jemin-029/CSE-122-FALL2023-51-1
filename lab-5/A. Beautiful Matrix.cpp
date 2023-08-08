#include <bits/stdc++.h>
using namespace std;
int main()
{
int x[26];
 for(int i=1;i<26;i++)
{
   cin>>x[i];
}
if(x[13]==1)
{
   cout<<0;
}
else if(x[8]==1||x[12]==1||x[14]==1||x[18]==1)
{
cout<<1;
}
else if(x[1]==1||x[5]==1||x[21]==1||x[25]==1)
{
   cout<<4;
}
else if(x[4]==1||x[2]==1||x[10]==1||x[6]==1||x[16]==1||x[20]==1||x[22]==1||x[24]==1)
{
   cout<<3;
}
else {
   cout<<2;
}

   return 0;
}
