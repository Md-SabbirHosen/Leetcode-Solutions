class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())
            return false;
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        int l = 0,r = 0;

        for(int i = 0;i<s1.length();i++)
            v1[s1[i]-'a']++;
        int k = s1.length();

        while(r<s2.length()){
            v2[s2[r]-'a']++;

            if(r-l+1>=k){
                if(v1==v2)
                    return true;
                v2[s2[l]-'a']--;
                    l++; 
            }
            r++;
        }
        return false;
    }
};