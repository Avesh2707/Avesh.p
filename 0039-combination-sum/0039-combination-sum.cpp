class Solution {
public:
    vector<vector<int>> ans;

    void solve(vector<int>& candidates, int target, int start,
               vector<int>& curr) {

        // target complete
        if (target == 0) {
            ans.push_back(curr);
            return;
        }

        // target negative
        if (target < 0) {
            return;
        }

        for (int i = start; i < candidates.size(); i++) {

            // number cannot be used
            if (candidates[i] > target)
                continue;

            // choose
            curr.push_back(candidates[i]);

            // i again because same number can be reused
            solve(candidates, target - candidates[i], i, curr);

            // backtrack
            curr.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        solve(candidates, target, 0, curr);
        return ans;
    }
};