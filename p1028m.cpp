#include<iostream>
using namespace std;
int sum=1;

int fun(int n){
    if(n==1) return sum;
    for(int i=1;i<=n/2;i++)
    {
        sum++;
        fun(i);
    }

    return sum;
}

int main(){
    int n;
    cin>>n;
    fun(n);
    cout<<sum;
    return 0;
}

