class Solution {

public:
 static bool cmp(pair<string,int> a, pair<string,int> b) {
        if(a.second == b.second) {
        return a.first < b.first;
    }

        return a.second > b.second;
}
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>um;
        for(int i=0;i<words.size();i++){
            um[words[i]]++;
        }
        
       
        vector<pair<string,int>> v;
          for(auto x : um) {
           v.push_back(x);
    }

    sort(v.begin(), v.end(), cmp);

        vector<string>s;
        for(int i=0; i<k; i++) {
        s.push_back(v[i].first);
    }
        return s;
    }
};

//key learnings:
//1. We can use an unordered_map to count the frequency of each word in the input vector.
//2. We can then create a vector of pairs to store the words and their corresponding frequencies.
//3. We can sort the vector of pairs based on the frequency in descending order, and if two words have the same frequency, we can sort them in lexicographical order.
//4. Finally, we can extract the top k words from the sorted vector and return them as the result.  

// 1. Frequency count ke liye:
//    unordered_map<string,int> um;

// 2. Count:
//    um[word]++;

// 3. unordered_map directly sort nahi hota.

// 4. Pehle map -> vector convert:
//    vector<pair<string,int>> v(um.begin(), um.end());

// 5. sort() vector pe lagta hai.

// 6. Comparator:
//    - Higher frequency first
//    - Same frequency -> lexicographical order

// 7. Important comparator:

//    static bool cmp(pair<string,int> a, pair<string,int> b) {

//        if(a.second == b.second) {
//            return a.first < b.first;
//        }

//        return a.second > b.second;
//    }

// 8. Sorting:
//    sort(v.begin(), v.end(), cmp);

// 9. Top k print:
//    for(int i=0; i<k; i++) {
//        ans.push_back(v[i].first);
//    }

// 10. Biggest mistake:
//     comparator ko static lagana tha.

// 11. Second mistake:
//     rteurn -> return

// 12. Important Pattern:
//     unordered_map -> vector<pair> -> sort -> top k

// 13. Time Complexity:
//     O(n log n)