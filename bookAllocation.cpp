#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int>b , int n , int m , int maxPages){
    int student = 1;
    int pages = 0;

    for(int i = 0; i < b.size() ; i ++){
        if(b[i] > maxPages){
            return false;
        }
    }
    
    for(int i = 0; i < b.size() ; i++){
        if(pages + b[i] <= maxPages){
            pages += b[i];
        }else{
            student++;
            pages = b[i];
        }
    }
    return student > m ? false : true;
}

int ans(vector<int> b , int noOfBooks , int noOfstudents){
    if(noOfstudents > noOfBooks){
        return -1;
    }
    int start = 0;
    int sum = 0;
    for(int i = 0; i<b.size(); i++){
        sum +=b[i];
    }
    int answer = 0;
    int end = sum;
    
    while(start<=end){

        int mid = start + (end - start)/2;

        if(isValid(b, noOfBooks , noOfstudents , mid)){
            answer = mid;
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    return answer;
}

int main(){
    vector<int>a = {1,2,3,4};
    int n = 4;
    int m = 2;
    cout<<ans(a,n,m);
}