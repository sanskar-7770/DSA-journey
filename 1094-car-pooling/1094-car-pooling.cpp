class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int n=0;
        for(int i =0;i<trips.size();i++)
        {
            n=max(n,trips[i][2]);
        }
        int pre=0;
        int res=0;
        int maxv=0;
        vector<int>arr(n+1,0);
        for(auto a:trips)
        { 
            arr[a[1]]+=a[0];
            arr[a[2]]-=a[0];

        }
        for(int x:arr)
        {
            pre+=x;
            res=max(res,pre);
            
        }
        if(res<=capacity)
        {
            return true;
        }else{
        return false;
        }
    }
};