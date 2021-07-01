#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[],int n,int x){
    int left,right,mid;
    left=0;
    right=n-1;
    sort(arr,arr+n);
    while(left<=right){
        mid=left+(right-left)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]<x){
            left=mid+1;
        }
        if(arr[mid]>x){
            right=mid-1;
        }
    }
    return -1;


}

void unionAndIntersection(int a[],int b[], int n,int m){

    int common=0;
    int searchCount=0;


    for(int i=0;i<m;++i){
       searchCount=binarySearch(a,n,b[i]);
       if(searchCount!=-1){
        common++;
       }
    }

    int unionLenght=(n+m)-common;
    int intersectionCount=common;
    printf("%d\n",unionLenght);
    printf("%d",intersectionCount);
}

int main(){
     int a[]={7, 1, 5, 2, 3, 6}  ;
     int b[]={3, 8, 6, 20, 7}  ;
     unionAndIntersection(a,b,6,5);
}
