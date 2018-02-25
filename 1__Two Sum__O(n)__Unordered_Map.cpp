class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> numMap;
        numMap.clear();
        vector<int> result;
        result.clear();
        for(int i=0;i<nums.size();i++){
            unordered_map<int,int>::iterator it=numMap.find(target-nums[i]);
            if(it!=numMap.end()&&it->second!=i){
                result.push_back(i);
                result.push_back(it->second);
                return result;
            }
            else {
                numMap.emplace(nums[i],i);
            }
        }
        throw runtime_error("Solution not Found");
    }
};