class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1;
        int sum=0;
        vector<int> result;
        while(left<right){
            sum=nums[left]+nums[right];
            if(sum==target){
                result.emplace_back(left+1);
                result.emplace_back(right+1);
                return result;
            }
            else if (sum<target){
                left++;
            }
            else{
                right--;
            }
        }
    }
};