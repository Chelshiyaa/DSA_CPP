#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSum(vector<int>& arr) {
        int n = arr.size();
        int res = arr[0], maxEnd = arr[0];
        for (int i = 1; i < n; i++) {
            maxEnd = max(maxEnd + arr[i], arr[i]);
            res = max(res, maxEnd);
        }
        return res;
    }

    int maxSubarraySumCircular(vector<int>& nums) {
        int maxNormal = maxSum(nums);
        if (maxNormal < 0) {
            return maxNormal;
        }
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            nums[i] = -nums[i];
        }
        int maxCir = sum + maxSum(nums);
        return max(maxNormal, maxCir);
    }
};

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution sol;
    int result = sol.maxSubarraySumCircular(nums);
    cout << "The maximum circular subarray sum is: " << result << endl;

    return 0;
}
