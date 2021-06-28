#include<bits/stdc++.h>

using namespace std;

vector <int> selectionSortAsc(vector <int> a, int n){
    int i,j,indexMin,temp;
    for(i=0;i<n-1;i++){
        indexMin=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[indexMin]){
                indexMin=j;
            }
        }
        if(indexMin!=i){
            temp=a[i];
            a[i]=a[indexMin];
            a[indexMin]=temp;
        }
    }
    return a;
}

vector <int> selectionSortDsc(vector <int> a, int n){
    int i,j,indexMax,temp;
    for(i=0;i<n-1;i++){
        indexMax=i;
        for(j=i+1;j<n;j++){
            if(a[j]>a[indexMax]){
                indexMax=j;
            }
        }
        if(indexMax!=i){
            temp=a[i];
            a[i]=a[indexMax];
            a[indexMax]=temp;
        }
    }
    return a;
}

int main(){
    printf("..............Selection Sort Ascending Order................\n");
    vector <int> solutionAsc=selectionSortAsc({3,5,7,2,1,4},6);
    for(int i=0;i<solutionAsc.size();i++){
        printf("%d ",solutionAsc[i]);
    }
    printf("\n..............Selection Sort Descending Order................\n");
    vector <int> solutionDsc=selectionSortDsc({3,5,7,2,1,4},6);
    for(int i=0;i<solutionDsc.size();i++){
        printf("%d ",solutionDsc[i]);
    }

    return 0;
}




