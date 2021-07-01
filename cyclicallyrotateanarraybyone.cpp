#include<bits/stdc++.h>

using namespace std;

void cycle(vector <int> a, int n){
    int left=0,right=n-1,temp;
    while(left<=right){
        temp=a[left];
        a[left]=a[right];
        a[right]=temp;
        left++;
    }

    for(int i=0;i<n;++i){
        printf("%d ",a[i]);
    }
}

int main(){
    vector <int> arr={9, 8, 7, 6, 4, 2, 1, 3};
    cycle(arr,arr.size());
}
