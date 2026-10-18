
#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
        int frequency = 0;
        int currentValue = 0;

        for (int i = 0; i < nums.size() ; i++){
            if(frequency == 0 ){
                currentValue = nums[i];
            }
                if(currentValue == nums[i]){
                    frequency++;
                }else{
                    frequency--;
                }
        }
        return currentValue;
    }

int main() {
    vector<int> arr = {1, 2, 2, 1, 1, 1};

    cout << majorityElement(arr);

    return 0;
}
