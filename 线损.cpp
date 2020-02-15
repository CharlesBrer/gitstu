#include<bits/stdc++.h>
using namespace std;
int main(){
int g,s; 
int i=0;
double s1;
int a;
cout<<"请输入最本次抄表最大线损:"; cin>>a;
while(1)
{   
    
    
    cout<<"请输入供电量:";
    cin>>g;
    cout<<"请输入售电量:";
    cin>>s;
double xs=((double)g-(double)s)/(double)g*100;
if(g<s){
    cout<<"涨："<<g-s<<endl;
}

else if(xs<=a&&xs>=0) printf("线损为：%.2lf%%\n",xs);
else{
    s1=(double)s;
while(xs>a)//此括号前的数字为最大线损,可修改
{
    i++; s1+=1;
    xs=((double)g-(double)s1)/(double)g*100;
}
printf("%d + %d = %d,线损为: %.2lf%%\n",s,i,s+i,xs);
i=0;
}

}
return 0;
}
