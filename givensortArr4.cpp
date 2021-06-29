#include <bits/stdc++.h>

using namespace std;

void arrSort(vector<int>a,int n){
    int zero=0,one=0,two=0;
    int i;
    for(i=0;i<n;++i){
        if(a[i]==0){
            zero+=1;
        }
        if(a[i]==1){
            one+=1;
        }
        if(a[i]==2){
            two+=1;
        }
    }

    i=0;
    //printf("%d %d %d",zero,one,two);

    while(zero>0){
        a[i++]=0;
        zero--;
    }
     while(one>0){
        a[i++]=1;
        one--;
    }

     while(two>0){
        a[i++]=2;
        two--;
    }


    for (i=0;i<n;i++){
        printf("%d ",a[i]);
    }


}

int main(){
    vector <int> testArr={0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};

    arrSort(testArr,testArr.size());

    return 0;

}
