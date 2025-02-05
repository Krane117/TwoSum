class Solution {
    public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> mp;
        vector <int> res;
        for (int i=0; i<nums.size(); i++)
        {
            // 2 -> 0, 7 > 1 ..
            if (mp.find(nums[i]) == mp.end())
            mp[nums[i]] = i;
        if (mp.find(target-nums[i]) != mp.end() && i != mp[target-nums[i]])
        {
            res.push_back(i);
            res.push_back(mp[target-nums[i]]);
            break;
    }
   }
   return res;
    }
};