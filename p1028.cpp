#include<iostream>
using namespace std;

int main(){
int s[1005];
for(int i=1;i<=1000;i++)
{
    s[i]=1;
    for(int j=1;j<=i/2;i++) s[i]+=s[j];
}
int n;
cin>>n;
cout<<s[n];
return 0;
}
