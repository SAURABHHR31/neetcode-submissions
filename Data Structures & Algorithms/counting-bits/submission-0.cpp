class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++){
            int x=i,cnt=0;
            while(x!=0){
                x=x&x-1;
                cnt++;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};
