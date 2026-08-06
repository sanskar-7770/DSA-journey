class Solution {
private:
    bool check(int n,int t){
        int product=1;
        while(n!=0){
            product=product*(n%10);
            n=n/10;
        }
        if(product%t==0){
            return true;
        }
        else{
            return false;
        }
    }
public:
    int smallestNumber(int n, int t) {
        
        while(!check(n,t)){
            n=n+1;
        }
        return n;
    }
};