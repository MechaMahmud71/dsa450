#include<bits/stdc++.h>

using namespace std;

int largeSum (int a[],int n){
    int maxValue=a[0],total=0;
    bool isTrue=false;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            isTrue=true;
        }
    }

    if(isTrue){
        sort(a,a+n);
        return a[n-1];
    }


    for (int i=0;i<n-1;i++){
        total=a[i];
        for(int j=i+1;j<n-1;j++){
            total+=a[j];
            if(maxValue<total){
                maxValue=total;
            }
        }
    }

    return maxValue;
}

int main(){
    int arr[]={-2, -3, 4, -1, -2,1,5,-3};
    int solution=largeSum(arr,8);
    printf("%d",solution);
}
