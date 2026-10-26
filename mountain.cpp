#include<iostream>
#include<vector>
using namespace std;

int Mountain(vector<int>&a){
    int start = 1;
    int end = a.size() -2;

    while(start<= end){
        int mid = start + (end - start)/2;

        if(a[mid]> a[mid - 1] && a[mid] > a[mid+1]){
            return mid;
        }else if(a[mid] < a[mid+1]){
            start = mid+1;
        }else{
            end = mid-1;
        }

    }
    return -1;
}
int main(){
    vector<int>arr = {1,2,3,10,9,8,7,6,5};
    cout<<Mountain(arr);
}

