#include<bits/stdc++.h>
using namespace std;
stack<int> s;
stack<int> m;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
      int n;
cin>>n;
int a[n],b[n];
for(int i=0;i<n;i++)
   {
    cin>>a[i];
 
   }
for(int i=0;i<n;i++)
   {
   
 cin>>b[i];
     
   }
m.push(b[0]);
s.push(a[0]);
for(int i=0;i<n-1;i++)
   {
   if(a[i]>a[i+1])
          {s.push(a[i+1]);}
 if(b[i]>b[i+1])
          {m.push(b[i+1]);}
     
   }
cout<<s.top()+m.top();
    return 0;
}

