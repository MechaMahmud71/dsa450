#include<bits/stdc++.h>

using namespace std;

void margeSort(int a[],int b[],int m, int n){
    int len=m+n;
    int c[len];
    int i=0,j=0,k=0;
    while(i<m &&j<n){
        if(a[i]<b[j]){
            c[k++]=a[i++];
        }
        if(a[i]>b[j]){
            c[k++]=b[j++];
        }
    }

    while(i<m){
        c[k++]=a[i++];
    }
    while(j<n){
        c[k++]=b[j++];
    }

    for(int i=0;i<len;++i){
        printf("%d ",c[i]);
    }
}

int main(){
    int a[]={2,8,15,18};
    int b[]={4,5,12,17,22,23,24};
    margeSort(a,b,4,7);
}
