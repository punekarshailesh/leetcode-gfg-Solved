class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        priority_queue<int>q;

        for(int i = 0 ; i<nums.size() ; i++){
            q.push(nums[i]);
        }

        int res = -1;

        while(k--){
            res = q.top();
            q.pop();
        }
        return res;

    }
};