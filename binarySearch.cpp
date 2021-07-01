#include <bits/stdc++.h>

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


int main(){
    int arr[]={85,25,1,32,54,6};
    int solution=binarySearch(arr,6,85);
    printf("the index number is %d",solution);
}


