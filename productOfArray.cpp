#include<iostream>
#include<vector>
using namespace std;

vector<int>Pro (vector<int>input){
    int n = input.size();
    vector<int>ans(n,1);
    
    int left = 1;
    for ( int i = 0 ; i < n ; i ++){
        ans[i]  *= left;
        left *= input[i];
    }
    int right = 1;
    for(int i = n-1; i >= 0; i--){
        ans[i] *= right;
        right *= input[i];
    }
        return ans;
    }
int main (){
    vector<int>a = {1,2,3,4};
    vector<int>result = Pro(a); 
    for ( int x : result ){
        cout<< x << " ";
    }
}