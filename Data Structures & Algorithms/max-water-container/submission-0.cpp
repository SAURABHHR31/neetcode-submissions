class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0,h=heights.size()-1,maxwater=0;
        while(l<h){
            int water=(h-l)*min(heights[l],heights[h]);
            maxwater=max(water,maxwater);
            if(heights[l]<heights[h]){
                l++;
            }
            else{
                h--;
            }

        }
        return maxwater;
    }
};
