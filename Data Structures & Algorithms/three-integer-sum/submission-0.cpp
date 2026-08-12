class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>p;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
        

            int t=-nums[i];
            int j=i+1,k=n-1;
            while(j<k){
                if(nums[j]+nums[k]<t){
                    j++;
                }
                else if(nums[j]+nums[k]>t){
                    k--;
                }
                else{
                 p.push_back({nums[i],nums[j],nums[k]});
                 j++;k--;
                 while (j < k && nums[j] == nums[j - 1])
                        j++;

                    while (j < k && nums[k] == nums[k + 1])
                        k--;
                }
            }

        }
        return p;
    }
};
