class Solution {
public:
    int arraySign(vector<int>& v) {
        int c=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==0) return 0;
            if(v[i]<0) c++;
        }
        if(c%2==0)return 1;
        return -1;
    }
};
