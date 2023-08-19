class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        sort(nums.begin() , nums.end() , greater<int>());

        int res = -1;
        for(int i = 0 ; i<k ; i++){
            res = nums[i];
        }
        return res;
    }
};