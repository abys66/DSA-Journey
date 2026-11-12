// With Sorting

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>>map;

        for (string word: strs) {

            string sortedWord = word;
            sort(sortedWord.begin(), sortedWord.end());

            map[sortedWord].push_back(word);

        }

        vector<vector<string>> result;

        for(auto pair : map) {

            result.push_back(pair.second);

        }
        
        return result;
    }
};

//Without Sorting

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;

        for (string word : strs) {
            
            int count[26] = {0};

            for (char c : word) {
                count[c - 'a']++;
            }

            string key = "";

            for (int i = 0; i < 26; i++) {
                key += to_string(count[i]) + "#";
            }

            map[key].push_back(word);
                
        }
        vector <vector<string>> result;

        for (auto pair : map) {
            result.push_back(pair.second);
        }

        return result;
    }
};

