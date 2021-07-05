#include<bits/stdc++.h>

using namespace std;

int main(){
    vector <int> a={1,3,4,2,2};
    sort(a.begin(),a.end());
    printf("%d",binary_search(a.begin(),a.end(),5));
}
