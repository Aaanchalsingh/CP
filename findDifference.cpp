class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& v1, vector<int>& v2) {
        vector<vector<int>> res;
        vector<int> ans;
        set<int> s1;
        set<int> s2;
        for(int i=0;i<v1.size();i++) s1.insert(v1[i]);
        for(int i=0;i<v2.size();i++) s2.insert(v2[i]);
        for(int i=0;i<v1.size();i++){
            if(s2.count(v1[i])==0) {
                ans.push_back(v1[i]);
                s2.insert(v1[i]);
            }
        }
        res.push_back(ans);
        ans.clear();
        for(int i=0;i<v2.size();i++){
            if(s1.count(v2[i])==0) {
                ans.push_back(v2[i]);
                s1.insert(v2[i]);
            }
        }
        res.push_back(ans);
        return res;
    }
};
