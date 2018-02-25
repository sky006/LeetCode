class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> numMap;
        numMap.clear();
        vector<int> result;
        result.clear();
        for(int i=0;i<nums.size();i++){
            numMap.insert(make_pair(nums[i],i));
        }
        for(int i=0;i<nums.size();i++){
            map<int,int>::iterator it=numMap.find(target-nums[i]);
            if(it!=numMap.end()&&it->second!=i){
                result.push_back(i);
                result.push_back(it->second);
                break;
            }
        }
        return result;
    }
};