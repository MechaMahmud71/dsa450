#include<bits/stdc++.h>

using namespace std;

int largeSum(int a[],int n){
   int max_so_far=0;
   int max_ending_here=0;

   for (int i=0;i<n;++i){
    max_ending_here+=a[i];
    if(max_ending_here>max_so_far){
        max_so_far=max_ending_here;
    }
    if(max_ending_here<0){
        max_ending_here=0;
    }

   }
   return max_so_far;
}

int main(){
    int a[]={-2, -3, 4, -1, -2, 1, 5, -3};
    int solution=largeSum(a,8);
    printf("%d",solution);
}
