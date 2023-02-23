class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>> keys;
        vector<vector<string>> res;
        for(auto wrd:strs)
        {
            vector<int> count(26,0);
            for(char c:wrd)
            {
                count[c - 'a']++;
            }
            keys[count].emplace_back(wrd);
        }
        for(auto k=keys.begin(); k!= keys.end();k++)
        {
            res.emplace_back(k->second);
        }
        return res;
    }
};
