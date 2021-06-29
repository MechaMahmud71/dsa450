#include <bits/stdc++.h>

using namespace std;

void negetiveSorting(vector <int> a,int n){
    int left,right,temp;
    left=0;
    right=n-1;

    while(left<=right){
        if(a[left]<0&&a[right]<0){
            left++;
        }
        if(a[left]>0&&a[right]<0){
            temp=a[left];
            a[left]=a[right];
            a[right]=temp;
            left++;
            right--;
        }
        if(a[left]>0&&a[right]>0){
            right--;
        }
        else{
            left++;

        }
    }

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}


int main(){
    vector<int> solution={11,-2,-3,7,-8};
    negetiveSorting(solution,solution.size());
}
