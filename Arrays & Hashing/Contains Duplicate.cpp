class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_set<int>s;

       for(auto num:nums){
           if(s.count(num)>0)
            return true;
            else s.insert(num);
       }
       return false;
    }
};