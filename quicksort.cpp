#include<iostream>
using namespace std;

int paritation(int *arr, int low , int high )
{

    int pivot = arr[low];
    while(low < high)
     { 
     while(low<high && arr[high]>=pivot) high--;
     arr[low] = arr[high];
            while(low<high && arr[low]<=pivot) low++;
            arr[high] = arr[low];
         
        arr[low] = pivot;
        return low;
    }
}//后两句忘记了
void Qsort(int *arr, int low, int high)
{ 
    if(low < high)
    {

    int pivot = paritation(arr,low,high);
        Qsort(arr,low,pivot - 1);
        Qsort(arr,pivot + 1, high); 
    }
}
void quicksort(int *arr,int n){ 
    Qsort(arr,0,n-1);
}
int main(){ 
    int a[9]={9,3,213,6,12,56,324,65,1};
    quicksort(a,9);
    for(int i=0;i<9;i++)
    { 
        cout<<a[i]<<" ";
    }
    return 0;
}
