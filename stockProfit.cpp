#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

int priceStock(vector<int>arr){

    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int i = 0 ; i < arr.size() ; i ++){
        minPrice = min(minPrice , arr[i]);
        maxProfit = max(maxProfit , arr[i] - minPrice);
    }
    return maxProfit;
}

int main (){
    vector<int>arr = {7, 1, 5, 3, 6, 4};

    cout<<priceStock(arr);
}