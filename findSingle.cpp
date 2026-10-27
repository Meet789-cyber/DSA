#include<iostream>
#include<vector>
using namespace std;

int findSingle(vector<int>&a){
    int n = a.size();
    int start =0;
    int end = n -1;

    while(start <= end){
        int mid = start + (end - start)/2;

        if(mid == 0 && a[0] != a[1]) return a[mid];
        if(mid == n-1 && a[n-1] != a[n-2]) return a[mid];
        if(a[mid] != a[mid+1] && a[mid] != a[mid-1]) return a[mid];

        if(mid%2==0){
            if(a[mid] == a[mid-1] ){
                end = mid -1;
            }else{
                start = mid+1;
            }
        }else{
            if(a[mid] == a[mid+1]){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int>input = {1,1,3,3,4,4,5,5,7};
    cout<<findSingle(input);
}