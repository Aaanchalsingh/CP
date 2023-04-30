class Solution {
public:
    int mini=INT_MAX;
    int minimumCardPickup(vector<int>& v) {//3423477
        map<int,int> mp;bool flag=true;    //123
        for(int i=0;i<v.size();i++){
            if(mp[v[i]]==0) mp[v[i]]=i+1;
            else {
                int n=mp[v[i]];
                mini=min(mini,i-n);
                flag=false;
                mp[v[i]]=i+1;
            }   
        }     
        if(flag) return -1;
        return mini+2;
    }
};
