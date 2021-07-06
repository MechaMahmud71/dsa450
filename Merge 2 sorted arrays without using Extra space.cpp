#include<bits/stdc++.h>

using namespace std;

void margeSort(int a[],int b[],int m, int n){
    int i=0;
    int j=0;
    int temp;
    while (i<m){
        if(a[i]>b[j]){
            swap(a[i],b[j]);
        }
        if(b[j]>b[j+1]){
            swap(b[j],b[j+1]);
        }

        i++;
    }

    sort (b,b+n);

    for(int i=0;i<m;++i){
        printf("%d ",a[i]);
    }
    for(int i=0;i<n;++i){
        printf("%d ",b[i]);
    }
}


int main(){
    int a[]={2};
    int b[]={10,3};
    margeSort(a,b,1,2);
}
