#include<bits/stdc++.h>
using namespace std;
int main(){
int g,s; 
int i=0;
double s1;
int a;
cout<<"��������γ����������:"; cin>>a;
while(1)
{   
    
    
    cout<<"�����빩����:";
    cin>>g;
    cout<<"�������۵���:";
    cin>>s;
double xs=((double)g-(double)s)/(double)g*100;
if(g<s){
    cout<<"�ǣ�"<<g-s<<endl;
}

else if(xs<=a&&xs>=0) printf("����Ϊ��%.2lf%%\n",xs);
else{
    s1=(double)s;
while(xs>a)//������ǰ������Ϊ�������,���޸�
{
    i++; s1+=1;
    xs=((double)g-(double)s1)/(double)g*100;
}
printf("%d + %d = %d,����Ϊ: %.2lf%%\n",s,i,s+i,xs);
i=0;
}

}
return 0;
}
