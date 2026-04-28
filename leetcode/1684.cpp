class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<bool>allowedSet(26,false);

        for(char c:allowed){
            allowedSet[c-'a']=true;
        }
        int c=0;
        for(string word:words){
            bool b=true;
            for(char c:word){
                if(!allowedSet[c-'a']){
                    b=false;
                    break;
                }
            }
            if (b) c++;
        }
        return c;
    }
};
//key learning:
// - char to index conversion using (c - 'a')
// - boolean array as hash (O(1) lookup)
// - greedy checking per string