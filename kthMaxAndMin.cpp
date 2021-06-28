#include <bits/stdc++.h>

using namespace std;


struct Numbers{
    int maxNum;
    int minNum;
};

Numbers kthMaxMin(vector <int> a,int k){
    int n=a.size();
    sort (a.begin(),a.end());
    Numbers num;
    num.minNum=a[k-1];
    num.maxNum=a[n-k];
    return num;
};

int main(){
    Numbers solution=kthMaxMin({1,2,3,4,5,6,7,8,9,10},4);
    printf(".........Max Number..............\n");
    printf("%d",solution.maxNum);
    printf("\n.........Min Number..............\n");
    printf("%d",solution.minNum);
}
