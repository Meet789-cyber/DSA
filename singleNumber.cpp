#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec = {2,3,4,2,3,4,5};

    int value = 0;

    for (int vect : vec ){
        value ^= vect;
    }
    cout<<value;

    return 0;
}