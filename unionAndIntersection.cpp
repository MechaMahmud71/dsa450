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
    int searchCount=0;
    vector <int> unionArr;
    vector <int> intersectArr;



    for(int i=0;i<n;i++){
        unionArr.push_back(a[i]);
    }

    for(int i=0;i<m;++i){
        searchCount=binarySearch(a,n,b[i]);
        if(searchCount!=-1){
        intersectArr.push_back(b[i]);
       }
       else{
        unionArr.push_back(b[i]);
       }

    }
    printf("union\n");

    for(int i=0;i<unionArr.size();i++){
        printf("%d " ,unionArr[i]);
    }

    printf("\nintersection\n");

    for(int i=0;i<intersectArr.size();i++){
        printf("%d " ,intersectArr[i]);
    }



}

int main(){
     int a[]={7, 1, 5, 2, 3, 6};
     int b[]={3, 8, 6, 20, 7}  ;
     unionAndIntersection(a,b,6,5);
}
