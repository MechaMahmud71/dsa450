#include<bits/stdc++.h>

using namespace std;

vector <int> reverseArr(vector <int> arr ){

    int arrSize=arr.size();

    vector <int> finalArr;

    for (int i=arrSize-1;i>=0;i--){
        finalArr.push_back(arr[i]);
    }

    return finalArr;
}

int main() {
    vector <int> solution;
    vector <int> test={1,2,3};

    solution=reverseArr(test);

    for(int i=0;i<solution.size();i++){
        printf("%d",solution[i]);
    }
}
