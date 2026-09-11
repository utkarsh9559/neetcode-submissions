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
        ListNode*temp = head;
        int count=0;
        while(temp != NULL){
            temp = temp->next;
            count++;
        }
        if(count==n){
            return head->next;
        }
        ListNode*temp1=head;
        int count1=0;
         while(temp1 != NULL && count1 != count-n){
            temp1 = temp1->next;
                count1++;
         }
         ListNode*prev = head;
         if(prev != temp1){
            while(prev->next != temp1){
                prev = prev->next;
            }

         }
         prev->next = temp1->next;
         delete temp1;

         return head;
    }
};
