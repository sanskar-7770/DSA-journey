class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> count(26,0);
        int left=0;
        int maxfreq=0;
        int maxlen=0;
        for(int right=0;right<s.size();right++){
            count[s[right]-'A']++;
            maxfreq=max(maxfreq,count[s[right]-'A']);
            if((right-left+1)-maxfreq>k){
                count[s[left]-'A']--;
                left++;
            }
            maxlen=max(maxlen,right-left+1);
        }
        return maxlen;
    }
};