#include <bits/stdc++.h>

using namespace std;

int binarySearch(int arr[],int n,int x){
    int left,right,mid;
    left=0;
    right=n-1;
    while(left<=right){
        mid=(left+right)/2;
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
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int solution=binarySearch(arr,10,8);
    printf("the index number is %d",solution);
}
