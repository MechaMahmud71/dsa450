#include<bits/stdc++.h>

using namespace std;

vector <int> maxMin(vector <int> arr ){
    int maxValue=arr[0];
    int minValue=arr[0];
    vector <int> finalArr;

    for(int i=0;i<arr.size();i++){
        if(arr[i]>maxValue){
            maxValue=arr[i];

        }
        if(arr[i]<minValue){
            minValue=arr[i];
        }
    }

    finalArr.push_back(maxValue);
    finalArr.push_back(minValue);

    return finalArr;

}


int main() {
    vector <int> solution=maxMin({-11,2,3});
    printf("Max %d\n",solution[0]);
    printf("Min %d",solution[1]);
}
