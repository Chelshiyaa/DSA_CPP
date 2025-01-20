#include<iostream>
#include<vector>
using namespace std;
class NumArray {
public:
    vector<int> res;
    NumArray(vector<int>& nums) {
        res.resize(nums.size());
        res[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            res[i] = nums[i] + res[i - 1];
        }
    }

    int sumRange(int left, int right) {
        left+=1;
        right-=1;
        if (left == 0) return res[right];
        else return res[right] - res[left - 1];
        
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    NumArray obj(nums);
    cout << obj.sumRange(0, 2) << endl; 
    cout << obj.sumRange(1, 4) << endl; 
    cout << obj.sumRange(2, 4) << endl; 

    return 0;
}
