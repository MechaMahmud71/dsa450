#include<bits/stdc++.h>

using namespace std;


int duplicate(vector<int> a,int n){
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                return a[i];
            }
        }
    }

}

/*
int duplicate(vector<int> a ,int n){
    bool isTrue;
    vector <int> b;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){

    }
    for(int i=0;i<n;i++){
        if(binary_search(a.begin(),a.end(),a[i])){
            return a[i];
        }

    }
}
*/

int main(){
    vector <int> a={1,3,4,2,2};
    int n=3;
    int solution=duplicate(a,a.size());
    printf("%d",solution);
}

