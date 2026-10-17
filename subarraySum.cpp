#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {-1,2,3,-11,5};
    int size = 5;

    int currentValue = 0;
    int maxSum = INT_MIN;

    for ( int i = 0 ; i < size ; i ++ ){
        currentValue += arr[i];
        maxSum = max(currentValue ,maxSum);

        if(currentValue < 0){
            currentValue = 0;
        }
    }
    cout<<maxSum;
    return 0;
}