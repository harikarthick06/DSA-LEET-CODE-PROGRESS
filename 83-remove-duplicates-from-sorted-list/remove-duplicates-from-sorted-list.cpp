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
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_set<int> seen;
        ListNode*curr=head;
        ListNode*prev=NULL;
        while(curr){
            if(seen.count(curr->val)){
                prev->next=curr->next;
                delete curr;
            }
            else{
                seen.insert(curr->val);
                prev=curr;
            }
            curr=prev->next;

        }
        return head;
        
    }
};