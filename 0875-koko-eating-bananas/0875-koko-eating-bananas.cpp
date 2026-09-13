class Solution {
public:
    long long counthours(vector<int>& a,int speed ){
        long long int hours=0;
        for(auto pile:a){
            hours+=(pile+speed-1)/speed;
        }
        return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int s=1;
        int e=*max_element(piles.begin(),piles.end());
        int ans=e;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(counthours(piles,mid)<=h){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};