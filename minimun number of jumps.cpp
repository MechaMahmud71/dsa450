#include<bits/stdc++.h>

using namespace std;

int minJumps(int a[], int n){
   int jumps=1;
   int steps=2;
   int maxRange=0;

   if(a[0]==0){
    return -1;
   }



   for(int i=1;i<=n;i++){
    jumps++;
    maxRange=a[i];
    if(maxRange==0){
        return -1;
    }
    steps=steps+maxRange;
    if(steps>=n){
        return jumps++;
    }
    i=steps;


   }

    return jumps;


}


int main(){
    int a[]={1, 1, 1, 1, 1, 1, 1, 1,1, 1, 1};
    int n=11;

    int solution=minJumps(a,n);

    printf("%d",solution);
}

