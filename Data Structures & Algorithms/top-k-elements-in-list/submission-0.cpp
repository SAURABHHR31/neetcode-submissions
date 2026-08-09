class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> f;

      
        for (int i = 0; i < nums.size(); i++) {
            f[nums[i]]++;
        }

       
        vector<pair<int, int>> freq(f.begin(), f.end());

        
        sort(freq.begin(), freq.end(),
             [](const pair<int, int>& a, const pair<int, int>& b) {
                 return a.second > b.second;
             });

        
        vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(freq[i].first);
        }

        return ans;
    }
};