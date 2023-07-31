#include <bits/stdc++.h>
using namespace std;
int main()
{
int x,count=0;
cin>>x;
for(int i=0;i<x;i++){
   string s;
   cin>>s;
   if(s=="++X"||s=="X++"){
      count++; 
   }
   else count--;
}
cout<<count;

   return 0;
}
