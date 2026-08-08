class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        int m=t.length();
        if(n!=m) return false;
        vector<int>f(26,0);
        for(int i=0;i<n;i++){
            f[s[i]-'a']++;
        }
         for(int i=0;i<m;i++){
            f[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(f[i]>0){
                return false;
            }
        }
        return true;
    }
};
