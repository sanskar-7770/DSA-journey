class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0;
        int right=numbers.size()-1;
        while(left<right){
            int currsum=numbers[left]+numbers[right];
            if(currsum==target){
                return {left+1,right+1};
            }
            else if(currsum<target){
                left++;
            }
            else{
                right--;
            }
        }
        return {-1};
    }
};