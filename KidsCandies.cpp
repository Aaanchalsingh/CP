class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int e) {
        int maxi=INT_MIN;vector<bool> ans;
        for(auto i:c) maxi=max(maxi,i);
        for(int i=0;i<c.size();i++){
            if((c[i]+e)>=maxi) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};
