/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int index=1;
        ListNode* curr=head->next;
        ListNode* prev=head;
        vector<int> critical;
        while(curr->next!=NULL){
            if(prev->val>curr->val&&curr->next->val>curr->val||prev->val<curr->val&&curr->next->val<curr->val){
                critical.push_back(index);
                
            }
            
            prev=curr;
            curr=curr->next;
            index++;
        }
        if(critical.size()<2){
            return {-1,-1};
        }
        int maxdistance=critical.back()-critical.front();
        int mindistance=INT_MAX;

        for(int i=1;i<critical.size();i++){
            mindistance=min(mindistance,critical[i]-critical[i-1]);
        }
        return {mindistance,maxdistance};

    }
};