class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int Max = INT_MIN;

        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i] > Max){
                Max = nums[i];
            }
        }
        int size = Max + 1;
        int hash[size];
        // initializing the hash array with 0's
        for(int i = 0 ; i<size ; i++){
            hash[i] = 0;
        }

        for(int i = 0 ; i<nums.size() ; i++){
            hash[nums[i]] += 1;
        }


        // scan the frequency 
        int res = -1;
        for(int i = 0 ; i<size ; i++){
            if(hash[i] > 1){
                res = i;
            }
        }

        return res;
    }
};