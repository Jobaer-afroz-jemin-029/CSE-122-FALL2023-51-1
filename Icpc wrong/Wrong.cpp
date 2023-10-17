#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
for(int i=0;i<n;i++){
 string s;
cin>>s;
int ball;
int over=s.length();
ball=over%6;
over=over/6;
int wicket=0;
int run=0;
for(int j=0;j<s.length();j++)
{
if(s[j]=='1')
run=run+1;

 if(s[j]=='W')
wicket=wicket+1;
else if(s[j]=='2')
run=run+2;

else if(s[j]=='3')
run=run+3;

else if(s[j]=='4')
run=run+4;
else if(s[j]=='5')
run=run+5;
 else if(s[j]=='6')
run=run+6;

}


if(over>0&& ball>0)
cout<<over<<"."<<ball<<" Overs ";
else{
  cout<<over<<"."<<ball<<" Over ";
}
if(run>1)
cout<<run<<" Runs"<<" ";
else{
cout<<run<<" Run"<<" ";
}
if(wicket>1)
cout<<wicket<<" Wickets."<<endl;

else{
cout<<wicket<<" Wicket."<<endl;
}

}

    return 0;
}
