#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxWater(vector<int>input){
    int left = 0;
    int right = input.size()-1;
    int maxWater = 0;

    while(left < right){
        int w = right - left;
        int h = min(input[left] , input[right]);
        maxWater = max(maxWater,w*h);

        input[left] < input[right] ? left++ : right--;

    }
    return maxWater;
}
int main(){
    vector<int>arr = {1,8,6,2,5,4,8,3,7};
    cout<<maxWater(arr);
    return 0;
}