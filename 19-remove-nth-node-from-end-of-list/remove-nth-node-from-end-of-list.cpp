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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode*size=head;
        while(size){
            count++;
            size=size->next;
        }
        if (n == count) {
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }
        int trav=count-n-1;
        ListNode*temp=head;
        while(trav){
            
            temp=temp->next;
            trav--;
            if(trav==0){
                break;
            }

        }
        ListNode*dummy=NULL;
        if(temp && temp->next){
            dummy=temp->next;
            temp->next=temp->next->next;
        }
        delete dummy;
        return head;
        
    }
};