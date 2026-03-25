class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>um;
        for(int i=0;i<s.size();i++){
            um[s[i]]++;
        }
        int val=um.begin()->second;
        for(auto &it:um){
            if(it.second!=val) return false;
        }
         return true;
    }
   
};

//um.begin()->second 