class Solution {
public:
    int countdays(vector<int>&weights,int cap){
        int totalday=1;
        int currentweight=0;
        for(int i=0;i<weights.size();i++){
            
                if(currentweight+weights[i]>cap){
                    totalday++;
                    currentweight=weights[i];
                    
                    
                }
                else{
                    currentweight+=weights[i];
                }
            
        }
        return totalday;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int s=*max_element(weights.begin(),weights.end());
        int e=accumulate(weights.begin(), weights.end(), 0);
        int ans=e;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(countdays(weights,mid)<=days){
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