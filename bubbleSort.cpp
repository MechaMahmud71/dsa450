#include <bits/stdc++.h>

using namespace std;

void bubbleSort(int a[],int n){
    int temp;
    for(int i=0;i<n;++i){
        for(int j=0;j<n-i-1;++j){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;++i){
        printf("%d ",a[i]);
    }
}

int main(){
    int arr[]={1,2,4,3};
    bubbleSort(arr,4);
}
