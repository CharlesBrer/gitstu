#include<iostream>
#include<math.h>
using namespace std;
int num[21];
bool isprime(int n)//除2，3外，所有的素数都在6的倍数的两侧。
{
    if(n<=3) return n>1;//2,3
    if(n%6!=1&&n%6!=5) return false;//不满足上述条件，pass
    int s = (int)sqrt(n);
    for(int i=5;i<=s;i+=6)
        {
            if(n%i==0||n%(i+2)==0) return false;
        }
    return true;//所有小于n平方根的6的倍数的两侧都不为因数，则为素数
}//判断数是否为素数,是返回true 否返回false
int choose(int ln,int as,int s,int e)
{//ln为剩余k，as为前面累加积,s，e为剩下数字的选取范围
//调用递归生成全组合，在过程中逐渐把k个数相加，当选取的数字个数为0时，返回累加积是否为质数
if(ln==0) return isprime(as);
int sum=0;
for(int i=s;i<=e;i++)
{
    sum+=choose(ln-1,as+num[i],i+1,e);
}
return sum;
}
int main(){
    int k,n;//数的集合用数组，k为选出，n为总数
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>num[i];//输入数组
    cout<<choose(k,0,0,n-1);

}
