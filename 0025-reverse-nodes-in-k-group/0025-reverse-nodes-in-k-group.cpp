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
     ListNode* reverse(ListNode* head, int k) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL && k--) {
            ListNode* front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }

        return prev;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL&&count<k){
            temp=temp->next;
            count++;
        }
        if(count<k){
            return head;
        }
        ListNode* newhead=reverse(head,k);
        head->next=reverseKGroup(temp,k);
        return newhead;
    }
};