#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findFirstOccur(vector<int> &nums, int target){
        int s = 0, e = nums.size() - 1;
        int ans = -1;

        while(s <= e){
            int mid = s + (e - s) / 2;

            if(nums[mid] == target){
                ans = mid;
                e = mid - 1; // move left
            }
            else if(nums[mid] < target){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        return ans;
    }

    int findLastOccur(vector<int> &nums, int target){
        int s = 0, e = nums.size() - 1;
        int ans = -1;

        while(s <= e){
            int mid = s + (e - s) / 2;

            if(nums[mid] == target){
                ans = mid;
                s = mid + 1; // move right
            }
            else if(nums[mid] < target){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;

        int result1 = findFirstOccur(nums, target);
        int result2 = findLastOccur(nums, target);

        ans.push_back(result1);
        ans.push_back(result2);

        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    vector<int> result = obj.searchRange(nums, target);

    cout << "First and Last Position: ";
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}