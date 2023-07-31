#include <bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
int arr[x];
for(int i=0;i<x;i++){
   cin>>arr[i];
}
int z=arr[y-1];
int count=0;
for(int i=0;i<x;i++){
   if(arr[i]>=z&&arr[i]>0){
     count++;
   }
}
cout<<count;

   return 0;
}
