class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int points=0;
        for(int i=0;i<k;i++){
            points+=cardPoints[i];
        }
        int maxsum=points;
        for(int i=0;i<k;i++){
            points=points-cardPoints[k-1-i]+cardPoints[n-1-i];
            maxsum=max(maxsum,points);
        }
        return maxsum;
    }
};