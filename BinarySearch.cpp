#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums, int target) {
        int n = nums.size();
        
        for ( int i = 0 ; i < n ; i ++ ){
            if(nums[i]== target){
                return i;
        }
        
    }
    return -1;
}

int main(){
    vector<int>arr = {1,8,6,2,5,4,8,3,7};
    cout<<search(arr, 4);
    
    return 0;
}