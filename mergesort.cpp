#include<iostream>
using namespace std;

void merge(int *arr,int *rarr,int start, int end)
{
    if(start >= end) return;
    int len = end - start; int mid = (len >> 1) + start;
    int start1 = start,end1 = mid, start2 =mid+1, end2 = end;
    
    merge(arr,rarr,start1,end1); 
    merge(arr,rarr,start2,end2);

   int k = start;
    while(start1<=end1 && start2<=end2)
       rarr[k++] = arr[start1] < arr[start2] ? arr[start1++] : arr[start2++];
      while(start1 <= end1)
          rarr[k++] = arr[start1++];
      while(start2 <= end2)
          rarr[k++] = arr[start2++];
      for(k=start;k<=end;k++)
        arr[k] = rarr[k];
}
void mergesort(int *arr,int len)
{
   int rarr[len];
  merge(arr,rarr,0,len-1); 
}

int main(){ 
    int arr[10] = { 4,1,7,6,0,8,5,2,9,3};
    mergesort(arr,10);
    for(int i=0;i<10;i++)
        cout<<arr[i]<<' ';
    return 0;
}
