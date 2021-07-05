#include<bits/stdc++.h>

using namespace std;

int minHeight(int a[],int n,int k){

    for(int i=0;i<n;i++){
        if(a[i]>k){
            a[i]=a[i]-k;
        }
        else{
            a[i]=a[i]+k;
        }
    }

    sort(a,a+n);


    return a[n-1]-a[0];

}

int main(){
    int arr[]={1, 10, 14, 14, 14, 15};
    int solution=minHeight(arr,6,6);
    printf("%d",solution);
}

