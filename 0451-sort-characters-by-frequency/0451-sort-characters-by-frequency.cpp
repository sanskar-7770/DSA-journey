class Solution {
public:
    string frequencySort(string s) {
        int n=s.length();
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        vector<pair<int,char>> freq;
        for(auto it:mp){
            freq.push_back({it.second,it.first});
        }
        sort(freq.rbegin(),freq.rend());
        string ans="";
        for(auto it: freq){
            ans.append(it.first,it.second);
        }
        return ans;
    }
};